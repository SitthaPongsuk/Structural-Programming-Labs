// #include <iostream>
// using namespace std;
// int main(){
//     int Square[10], i;
//     for(i = 0; i < 10; ++i){
//         Square[i] = i * i;
//         cout << Square[i] << endl;
//     }
//     return(0);
// }



/* 6_1 : การสร้างและใช้งานอาเรย์ 1 มิติ */
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//     int X[10]; //declare and allocate array
//     int Y[] = {10,20,30,40,50,60,70,80,90,100};
//     const int Array_Size = 10;
//     int Z[Array_Size];

//     //Initial value in array
//     for(int i = 0; i < 10; i++){
//         X[i] = 0;
//     }
//     for(int i = 0; i < Array_Size; i++){
//         Z[i] = 2 + 2 * i;
//     }

//     //Display output of array
//     cout << ": Subscript : Array X : Array Y : Array Z;\n";
//     cout << setfill('=') << setw(43) << "=" << endl;
//     cout << setfill(' ');
//     for(int i = 0; i < Array_Size; i++){
//         cout << ": " << setw(6) << i << "   :";
//         cout << setw(6) << X[i] << "   :";
//         cout << setw(6) << Y[i] << "   :";
//         cout << setw(6) << Z[i] << "   :";
//         cout << endl;
//     }
//     cout << setfill('=') << setw(43) << "=" << endl;
//     return(0);
// }



/* 6_2 : การผลรวมของอาเรย์ 1 มิติ */
// #include <iostream>
// using namespace std;
// int main(){
//     //declare and allocate array
//     int A[] = {1,2,3,4,5,6,7,8,9,10};
//     const int Array_Size = 10;
//     int Sum = 0;
//     //Compute sum value in array
//     for(int i = 0; i < Array_Size; i++){
//         Sum = Sum + A[i];
//         cout << Sum << endl;
//     }
//     //Display reault
//     cout << "Total of array element : " << Sum << endl;
//     return(0);
// }



/* 6_3 : การสร้างกราฟแท่งของอาเรย์ 1 มิติ */
// #include <iostream>
// #include <iomanip>
// #include <time.h>
// using namespace std;
// int main(){
//     int Data[10];
//     srand((unsigned int) time(0));
//     //Initial value in array
//     for(int i = 0; i < 10; i++){
//         Data[i] = rand() % 30 + 1;
//     }
//     //Display histogram
//     cout << "Element Value Histogram " << endl << endl;
//     for(int i = 0; i < 10; i++){
//         cout << setw(5) << i << " " << setw(4) << Data[i] << " ";
//         for(int k = 1; k <= Data[i];k++){
//             cout << "*";
//             cout << endl;
//         }
//     }
//     return(0);
// }