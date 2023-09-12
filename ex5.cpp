/* 5_1 : Library ctype */
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     char Ch;
//     string Message;
//     cout << "Enter charater : ";
//     cin >> Ch;
//     cout << endl;
//     if (isalnum(Ch)){
//         if(isalpha(Ch)){
//             if(islower(Ch)) Message = "lower charater.";
//             else Message = "upper charater.";
//         }
//         else if(isdigit(Ch)) Message = "digit.";
//     }
//     else Message = "special charater.";
//     cout << "\'" << Ch << "\'" << "is " << Message << endl;
//     if(isalnum(Ch)){
//         if(islower(Ch)){
//             cout << "\'" << Ch << "\'" << " convert to upper \'";
//             cout << (char)toupper(Ch) << "\'";
//         }
//         else {
//             cout << "\'" << Ch << "\'" << " to lower \'";
//             cout << (char)tolower(Ch) << "\'";
//         }
//         cout << endl;
//     }
//     return(0);
// }



/* 5_2 : Library cstdlid */
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int IntValue;
//     long LongValue;
//     float FloatValue;
//     string StrValue;
//     cout << "Enter string number : ";
//     cin >> StrValue;
//     /*convert string to numeric*/
//     IntValue = atoi(StrValue.c_str());
//     LongValue = atol(StrValue.c_str());
//     FloatValue = atof(StrValue.c_str());
//     cout << endl;
//     cout << "Convert String to Numeric.\n";
//     cout << "*************************\n";
//     cout << "Convert to integer = " << IntValue << endl;
//     cout << "Convert to long = " << LongValue << endl;
//     cout << "Convert to float = " << FloatValue << endl << endl;
//     /*init seed value to ranom*/
//     srand(IntValue);
//     cout << "Now random integer number 10 number:" << endl;
//     cout << "*******************************" << endl;
//     for (int N = 1, Num; N <=10; N++){
//         Num = rand() % 10;
//         cout << Num << " ";
//     }
//     cout << endl;
//     return(0);
// }



/* 5_3 : Library cmath */
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     double Value;
//     cout << "Enter floating number : ";
//     cin >> Value;
//     cout << endl;
//     cout << "\nCeiling of " << Value << " is " << ceil(Value);
//     cout << "\nFloor of " << Value << " is " << floor(Value);
//     cout << "\nSquare root of " << Value << " is " << sqrt(Value);
//     cout << "\nExponential of " << Value << " is " << exp(Value);
//     cout << "\nFloating absolute of " << Value << " is ";
//     cout << fabs(Value);
//     cout << "\nNatural logarithm of " << Value << " is ";
//     cout << log(Value);
//     cout << "\nLogarithm(10 base) of " << Value << " is ";
//     cout << log10(Value);
//     cout << "\nPower three of " << Value << " is ";
//     cout << pow(Value,3);
//     cout << "\nSin of " << Value << " is " << sin(Value);
//     cout << "\nCosine of " << Value << " is " << cos(Value);
//     cout << "\nTangent of " << Value << " is " << tan(Value);
//     cout << endl;
//     return(0);
// }



/* 5_4 : Library cstring */
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char Str1[30], Str2[20];
//     cout << "Enter string 1 : ";
//     cin >> Str1;
//     cout << "Enter string 2 : ";
//     cin >> Str2;
//     cout << endl;
//     cout << "strcat(Str1, Str2) = " << strcat(Str1, Str2);
//     cout << endl;
//     cout << "strchr(Str1, 's) = " << strchr(Str1, 's') << endl;
//     cout << "strcmp(Str1, Str2) = " << strcmp(Str1, Str2);
//     cout << endl;
//     cout << "strcpy(Str1, Str2) = " << strcpy(Str1, Str2);
//     cout << endl;
//     cout << "strlen(Str1) = " << strlen(Str1) << endl;
//     cout << "strlen(Str2) = " << strlen(Str2) << endl;
//     cout << "String 1 : " << Str1 << endl;
//     cout << "String 1 reverse : " ;
//     for(int N = strlen(Str1) - 1; N >= 0; N-- )
//         cout << Str1[N];
//         cout << endl << endl;
//     return(0);
// }



/* 5_5 : Library iomanip */
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main()
// {
//     float Radius, Angle;
//     const int WIDTH = 9;
//     cout << "+" << setfill('=') << setw(44) << "+" << endl;
//     cout << ":    Angle :     Sine :   Cosine :  Tangent :" << endl;
//     cout << "+" << setfill('=') << setw(44) << "+" << endl;
//     cout << setfill(' ');
//     for(Angle = 0.0; Angle <= 360.0; Angle += 20){
//         Radius = (Angle > 0.0) ? (180.0f * 3.14f) / Angle : 0.0;
//         cout << ":" << setw(WIDTH) << fixed << setprecision(2);
//         cout << Angle;
//         cout << " :" << setw(WIDTH) << setprecision(4) << sin(Radius);
//         cout << " :" << setw(WIDTH) << cos(Radius);
//         cout << " :" << setw(WIDTH) << tan(Radius);
//         cout << " :" << endl; 
//     }
//     cout << "+" << setfill('=') << setw(44) << "+" << endl;
//     return(0);
// }



/* 5_6 : Library iomanip */
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     cout << " Decial  : Octal   : Hexa " << endl;
//     cout << setfill('-') << setw(30) << "-" << endl;
//     cout << setfill('-') << showbase;
//     for(int Dec = 0; Dec <= 400; Dec += 50){
//         cout << " " << right << setw(7) << setbase(10) << Dec << " : ";
//         cout << right << setw(7) << setbase(8) << Dec << " : ";
//         cout << left << setw(7) << setbase(16) << Dec << endl;
//     }
//     return(0);
// }



/* 5_7 : การใช้งานฟังก์ชั่นของคลาส string */
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string Str1 = "Microsoft";
//     string Str2 = Str1 + "Word";
//     string Str3;
//     /* Display value and length */
//     cout << "Value Str1 = " << Str1 <<endl;
//     cout << ", Length Str1 = " << Str1.length() << endl;
//     cout << "Value Str2 = " << Str2 <<endl;
//     cout << ", Length Str2 = " << Str2.length() << endl;
//     cout << "Value Str3 = " << Str3 <<endl;
//     cout << ", Length Str3 = " << Str3.length() << "\n\n";
//     cout << "Enter text to Str3 : ";
//     cin >> Str3;
//     cout << "Now Length Str3 = " << Str3.length() << "\n\n";
//     switch ( Str1.compare(Str2) )
//     {
//     case 0 : cout << "Str1 equal Str2" << endl;
//             break;
//     case 1 : cout << "Str1 more than Str2" << endl;
//             break;
//     case -1 : cout << "Str1 less than Str2" << endl;
//             break;
//     }

//     /* find 's' from Str3 */
//     cout << "\nNow find 's' in Str3" << endl;
//     int pos = Str3.find("s");
//     if(pos > -1){
//         cout << "found 's' in Str3 at position " << pos << endl;
//     }
//     else{
//         cout << "not found 's' in Str3." << endl;
//     }

//     /* delete character in Str2 */
//     Str2.erase(5,4);
//     cout << "After erase character to Str2 : " << Str2 << endl;

//     /* replace character in Str1*/
//     Str1.replace(5,4,"chip");
//     cout << "After replace character to Str1 : " << Str1 << endl;

//     /* use substr in Str1 and Str2 */
//     cout << "\nString substr from Str1 and Str2 : ";
//     cout << Str1.substr(0,5) << Str2.substr(5,4) << endl;
//     return(0);
// }



/* 5_8 : การใช้งานฟังก์ชั่นที่สร้างเอง */
// #include <iostream>
// using namespace std;
// void CalCircle();
// int main()
// {
//     cout << "Program Calculate of Circle." << endl;
//     cout << "****************************" << endl;
//     CalCircle();
//     return(0);
// }

// void CalCircle()
// {
//     float Radius, Area, Cicumference;
//     cout << "Input Radius : ";
//     cin >> Radius;
//     Area = 3.14f * Radius * Radius;
//     Cicumference = 2 * 3.14f * Radius;
//     cout << endl;
//     cout <<"Area of circle : " << Area << endl;
//     cout << "Circumference of circle : " << Cicumference << endl;
//     cout << "Diameter of circle : " << (2 * Radius) << endl;
// }



/* 5_9 : การใช้งานฟังก์ชั่นด้วยการส่งค่าแบบ Pass by value */
// #include <iostream>
// using namespace std;
// int Min(int V1, int V2);
// int Max(int V1, int V2);
// int main()
// {
//     int Value1, Value2;
//     cout << "Enter first number : ";
//     cin >> Value1;
//     cout << "Enter second number : ";
//     cin >> Value2;
//     cout << "Max value : " << Max(Value1, Value2) << endl;
//     cout << "Min value : " << Min(Value1, Value2) << endl;
//     return(0);
// }
// int Min(int V1, int V2)
// {
//     if(V1 < V2){
//         return(V1);
//     }
//     else {
//         return(V2);
//     }
// }
// int Max(int V1, int V2)
// {
//     if(V1 > V2){
//         return(V1);
//     }
//     else{
//         return(V2);
//     }
// }



/* 5_10 : การใช้งานฟังก์ชั่นด้วยการส่งค่าแบบ Pass by reference */
// #include <iostream>
// using namespace std;
// void Sort3(int &V1, int &V2, int &V3);
// int main()
// {
//     int Value1, Value2, Value3;
//     cout << "Enter three integer number : ";
//     cin >> Value1 >> Value2 >> Value3;
//     int Output1, Output2, Output3;
//     Output1 = Value1;
//     Output2 = Value2;
//     Output3 = Value3;
//     Sort3(Output1, Output2, Output3);
//     cout << Value1 << " " << Value2 << " " << Value3;
//     cout << " in sorted order is ";
//     cout << Output1 << " " << Output2 << " " << Output3 << endl;
//     return(0); 
// }
// void Sort3(int &V1, int &V2, int &V3)
// {
//     int tmp;
//     if(V1 > V2){
//         tmp = V1; /* 4 */
//         V1 = V2;    /* 1 */
//         V2 = tmp; /* 4 */
//     }
//     if(V1 > V3){
//         tmp = V2; /* 1 */
//         V2 = V3;    /* 7 */
//         V3 = tmp;   /* 1 */
//     }
// }



/* 5_11 : การใช้งานฟังก์ชั่นด้วยการส่งค่าแบบ Pass by reference */
// #include <iostream>
// #include <string>
// using namespace std;
// void ChangeString(string &S1, string &S2);
// int main()
// {
//     string Str1, Str2;
//     cout << "Enter first string : ";
//     cin >> Str1;
//     cout << "Enter second string : ";
//     cin >> Str2;
//     cout << "Data string before call function\n";
//     cout << "Str1 = " << Str1 << endl;
//     cout << "Str2 = " << Str2 << endl;
//     ChangeString(Str1, Str2);
//     cout << "Data string after call function.\n";
//     cout << "Str1 = " << Str1 << endl;
//     cout << "Str2 = " << Str2 << endl;
//     ChangeString(Str1, Str2);
//     cout << "Data string after cal function.\n";
//     cout << "Str1 = " << Str1 << endl;
//     cout << "Str2 = " << Str2 << endl;
//     return(0);
// }
// void ChangeString(string &S1, string &S2)
// {
//     string Temp;
//     Temp = S1; 
//     S1 = S2;    
//     S2 = Temp; 
// }



/* 5_12 : การใช้งานฟังก์ชั่นกับขอบเขตของตัวแปร */
// #include <iostream>
// using namespace std;
// void a(void);
// void b(void);
// void c(void);
// int x = 1;
// int main()
// {
//     int x = 5;      /* local varialble to main */
//     cout << "local x in outer scope of main is " << x << endl;
//     {
//         int x = 7;
//         cout << "local x in inner scope of main is " << x << endl;
//     }
//     cout << "local x in outer scope of main is " << x << endl;
//     a();        /* a has automatic local */
//     b();        /* b has static local */
//     c();        /* c uses global */
//     a();        /* a reintialize automatic local */
//     b();        /* static local x retian its previous value */
//     c();        /* global x also retian its value */
//     cout << "local x in main " << x << endl;
//     return(0);
// }

// void a()
// {
//     int x = 25;     /* initialzed each time is called */
//     cout << "\nlocal x is " << x << " on ertering a()";
//     ++x;
//     cout << "\nlocal x is " << x << " before exiting a()\n";
// }

// void b()
// {
//     static int x = 50;      /* static initializations only */
//     cout << "\nlocal x is " << x << " on entering a()";
//     ++x;
//     cout << "\nlocal x is " << x;
//     cout << " before exiting a()\n";
// }

// void c()
// {
//     cout << "\nlobal x is " << x << " on entering c()";
//     x += 10;
//     cout << "\nlobal x is " << x << " before exiting c()\n";
// }



/* 5_13 : การใช้งานฟังก์ชั่นแบบ Constant Parameters */
// #include <iostream>
// #include <string>
// using namespace std;
// void ParseName(string &Firstname, string &Lastnamne, const string Fullname);
// int main()
// {
//     string Name = "Stoustrup, Bjarne";
//     string Lastname, Firstname;

//     ParseName(Firstname, Lastname, Name);
//     Name = Firstname + " " + Lastname;
//     cout << "Name : " << Name << endl;
//     return(0);
// } 

// void ParseName(string &Firstname, string &Lastnamne, const string Fullname)
// {
//     int l = Fullname.find(",");
//     Lastnamne = Fullname.substr(0,l);
//     Firstname = Fullname.substr(l+2, Fullname.size());
// }



/* 5_14 : การใช้งานฟังก์ชั่นแบบ Default Parameters */
// #include <iostream>
// #include <string>
// using namespace std;
// int Summation(int StartNumber = 1,int EndNumber = 10);
// int main()
// {
//     int Start, End;
//     cout << "Enter start number : ";
//     cin >> Start;
//     cout << "Enter end number : ";
//     cin >> End;
//     cout << endl;
//     cout << "Summation of number " << Start << " to ";
//     cout << " = " << Summation(Start, End) << endl;
//     cout << "Summation of number " << 5 << " to " << 10;
//     cout << " = " << Summation(5) << endl;
//     cout << "Summation of number " << 1 << " to " << 10;
//     cout << " = " << Summation() << endl;
//     return(0);
// }

// int Summation(int StartNumber, int EndNumber)
// {
//     long Sum = 0;
//     for(int N = StartNumber; N < EndNumber; N++)
//         Sum += N;
//     return Sum;
// }



/* 5_15 : การใช้งานฟังก์ชั่นแบบ Overloading */
// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;
// /* Define prototype function */
// void DisplayMenu();
// float Area(const float Radius);
// float Area(const float Length, const float Width);
// float Area(int n,const float Base, const float Hight);
// int main()
// {
//     char Choice;
//     bool Flag = true;
//     do{
//         DisplayMenu();
//         cin >> Choice;
//         if (Choice == '1'){
//             float Radius;
//             cout << "\nEnter radius : ";
//             cin >> Radius;
//             cout << "Area of Circle = " << fixed;
//             cout << setprecision(2) << Area(Radius) << endl;
//         }
//         else if (Choice == '2'){
//             float Length, Width;
//              cout << "\nEnter Length Width : ";
//             cin >> Length >> Width;
//             cout << "Area of Rectangle = " << fixed;
//             cout << setprecision(2) << Area(Length, Width); 
//             cout << endl;
//         }
//         else if (Choice == '3'){
//             int Base, Hight, n = 0.5;
//             cout << "\nEnter Base Hight : ";
//             cin >> Base >> Hight;
//             cout << "Area of Rectangle = " << fixed;
//             cout << setprecision(2) << Area(Base, Hight); 
//             cout << endl;
//         }
//         else if (Choice =='4') Flag = false;
//         else{
//             cout << "\nYou choose out of range is ";
//             cout << "not process.\n";
//         }
//     }while (Flag);
//         cout << "\n...Exit Program...\n";
//     return(0);
// }

// float Area(const float Radius)
// {
//     return(3.14159F * Radius * Radius);
// }
// float Area(const float Length, const float Width)
// {
//     return(Length * Width);
// }
// float Area(int n,const float Base, const float Hight)
// {
//     return(n * Base * Hight);
// }

// void DisplayMenu()
// {
//     cout << endl;
//     cout << "Program Calculate Area " << endl;
//     cout << "1. Circle" << endl;
//     cout << "2. Rectangle" << endl;
//     cout << "3. Triangle" << endl;
//     cout << "4. Exit" << endl;
//     cout << "Enter your choose number : ";
// }



// #include <iostream>
// using namespace std;
// long int factorial (int n);
// int main()
// {
//     int fac = factorial(5);
//     cout << fac;
// }

// long int factorial (int n)
// {
//     if (n > 1) return(n * factorial(n - 1));
//     else return(1);
// }



/* 5_16 : การใช้งานฟังก์ชั่นแบบ Recursion function */
// #include <iostream>
// using namespace std;
// unsigned long Factorial1(int Number);
// unsigned long Factorial2(int Number);
// unsigned long Factorial3(int Number, int i);
// int main()
// {
//     int Value;
//     cout << "Enter integer number(0-20) : ";
//     cin >> Value;
//     unsigned long Fac;
//     Fac = Factorial1(Value);
//     cout << "Factorial1 of " << Value << " is ";
//     cout << Fac << endl;
//     Fac = Factorial2(Value);
//     cout << "Factorial2 of " << Value << " is ";
//     cout << Fac << endl;
//      Fac = Factorial3(Value, 1);
//     cout << "Factorial3 of " << Value << " is ";
//     cout << Fac << endl;
//     return(0);
// }

// /* This function use loop */
// unsigned long Factorial1(int Number)
// {
//     unsigned long Fac = 1;
//     for(int N = 1; N <= Number; N++)
//             Fac * N;
//     return(Fac);
// }

// unsigned long Factorial2(int Number)
// {
//     unsigned long Fac = 1;
//     if(Number > 1) return(Number * Factorial2(Number - 1));
//     else return(1);
// }

// unsigned long Factorial3(int Number, int i)
// {
//     unsigned long Fac = 1;
//     if(i < Number) return (i * Factorial3(Number, i + 1));
//     else return(Number);
// }



/* 5_17 : โปรแกรมการใช้งานฟังก์ชั่น */
// #include <iostream>
// #include <cstring>
// using namespace std;
// void UpperStr(char temp[80]);
// int MaxInt(int Val1, int Val2);
// void Swap(int &a, int &b);
// int main()
// {
//     char Name[80];
//     int N1, N2;
//     cout << "Enter two number(n1 n2) : ";
//     cin >> N1 >> N2;
//     cout << "Enter string : ";
//     cin >> Name;
//     cout << endl;
//     cout << "\n Before call function...";
//     cout << "\n n1 = " << N1 << ", n2 = " << N2;
//     cout << ", string = " << Name;
//     cout << "\n Max value of n1 & n2 = " << MaxInt(N1, N2);
//     cout << "\n Press key to call function...";
//     getchar();
//     getchar();
//     swap(N1, N2);
//     UpperStr(Name);
//     cout << "\n After call function...";
//     cout << "\n n1 = " << N1 << ", n2 = " << N2;
//     cout << ", string = " << Name;
//     return(0);
// }

// int MaxInt(int Val1, int Val2)
// {
//     return((Val1 > Val2)? Val1 : Val2);
// }

// void Swap(int &a, int &b)
// {
//     int tmp;
//     tmp = a;    a = b;  b = tmp;
// }

// void UpperStr(char Str[80])
// {
//     if(strlen(Str) > 0)
//         for(int index = 0; index < strlen(Str); index++)
//             Str[index] = toupper(Str[index]);
// }