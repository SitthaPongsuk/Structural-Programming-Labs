/* 7_1 : แสดงการใช้ Pointer ชี้ไปยังตำแหน่งหน่วยความจำของตัวแปร และการอ้างใช้ค่าที่ตัวแปร pointer เก็บอยู่ */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 5, y, z = 4;    
//     int *xptr, *yptr, *zptr;    /* pointer to integer */
//     xptr = &x;                   /* assign address of x to xprt */
//     yptr = &y;                   /* assign address of y to yprt */
//     zptr = &z;                   /* assign address of z to zprt */
//     y = *xptr;                   /* assign value of x to y */
//     cout << "\nx = " << x << " &x = " << &x;
//     cout << "  xptr = " << xptr << " *xptr = " << *xptr;
//     cout << "\ny = " << y << " &y = " << &y;
//     cout << "  yptr = " << yptr << " *yptr = " << *yptr;
//     cout << "\nz = " << z << " &z = " << &z;
//     cout << "  zptr = " << zptr << " *zptr = " << *zptr;
//     x = 2 * (z + 5);             /* ordinary experssion */
//     y = 2 * (*zptr + 5);         /* equivalent experssion */
//     cout << "\nx = " << x << " y = " << y << " z = " << z << endl;
//     return(0);
// }



/* 7_2 : แสดงขนาดตัวแปร Pointer และขนาดของ *pointer */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *iptr, i;
//     char *cptr, c;
//     float *fptr, f;
//     double *dptr, d;
//     iptr = &i, cptr = &c, fptr = &f, dptr = &d;
//     cout << "Size of integer pointer is " << sizeof(iptr) << endl;
//     cout << "Size of char pointer is " << sizeof(cptr) << endl;
//     cout << "Size of float pointer is " << sizeof(fptr) << endl;
//     cout << "Size of double pointer is " << sizeof(dptr) << endl;
//     cout << "Size of *integer pointer is " << sizeof(*iptr) << endl;
//     cout << "Size of *char pointer is " << sizeof(*cptr) << endl;
//     cout << "Size of *float pointer is " << sizeof(*fptr) << endl;
//     cout << "Size of *double pointer is " << sizeof(*dptr) << endl;
//     return(0);
// }



/* 7_3 : แสดงการใช้ตัวแปร Pointer กับฟังก์ชั่น */
// #include <iostream>
// using namespace std;
// void scan_line(char line[], int *pu, int *pl, int *pd, int *pw, int *po);
// int main()
// {
//     char line[80];
//     int uppers, lowers, digits, whitespc, others;
//     uppers = lowers = digits = whitespc = others = 0;
//     cout << "\nEnter a line of text below :\n";
//     cin.getline(line, 79);
//     scan_line(line, &uppers, &lowers, &digits, &whitespc, &others);
//     cout << "\nNumber of upper charater : " << uppers;
//     cout << "\nNumber of lowers charater : " << lowers;
//     cout << "\nNumber of digits : " << digits;
//     cout << "\nNumber of whitespc charater : " << whitespc;
//     cout << "\nNumber of others charater : " << others;
//     cout << endl;
//     return(0);
// }

// void scan_line(char line[], int *pu, int *pl, int *pd, int *pw, int *po)
// {
//     int index = 0;
//     char c;
//     while ((c = line[index++]) !='\0')
//     {
//         if(isupper(c)) ++ *pu;
//         else if(islower(c)) ++ *pl;
//         else if(isdigit(c)) ++ *pd;
//         else if(isspace(c)) ++ *pw;
//         else ++ *po;
//     } 
// }



/* 7_4 : แสดงการใช้ Pointer กับการคืนค่าของฟังก์ชั่น */
// #include <iostream>
// #include <cstring>
// using namespace std;
// char *month(int n);
// int main()
// {
//     int n;
//     bool flag = true;
//     char text[10], * str;
//     str = (char *) malloc(12);      //alloc memory
//     do{
//         cout << "\nInput month number(0 - quit) : ";
//         cin >> text;
//         n = atoi(text);
//         if(n != 0){
//             if(n > 0 && n < 13){
//                 strcpy(str, month(n));
//                 cout << "Month name : " << str << endl;
//             }
//             else printf("Month number error\n");
//         }
//         else flag = false;
//     }while(flag);
//     return(0);
// }

// char *month(int n)
// {
//     char m[12][10] = {"January", "February", "March", "April", 
//                         "May", "June", "July", "August",
//                         "September", "October", "November", "December"};
//     char* data = m[n - 1];
//     return(data);
// }



/* 7-5 : แสดงการใช้ Pointer กับอาเรย์ 1 มิติ  */
// #include <iostream> 
// using namespace std; 
// int main() 
// { 
//     float A[10]={10,11,12,13,14,15,16,17,18,19}; 
//     float *ptr; 
//     ptr = A; 
//     cout << "\nStart address of array A = " << A; 
//     cout << "\nEnd address of array A = " << A+9 << endl; 
//     for (int i = 0 ; i < 10 ; i++) { 
//         cout << "\n i = " << i << "  A[i] = " << A[i]; 
//         cout << "  *(ptr+i) = "  << *(ptr+i); 
//         cout << "  &A[i] = " << &A[i] << "  ptr+i = " << ptr+i << endl; 
//     }
//     return(0);
// }



/* 7_6 : การใช้งานคำสั่ง new และ delete กับพอยน์เตอร์ในลักษณะอะเรย์ 1 มิติ */
#include <iostream>
#include <iomanip>
#include <time.h>
void Gen_