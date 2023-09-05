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
#include <iostream>
#include <string>
using namespace std;
int Summation(int StartNumber = 1,int EndNumber = 10);
int main()
{
    
}