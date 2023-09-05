/* Program 2_1 : Display with escape sequence */
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "123456789012345678901234567890\n";
//     cout << "ID : \t50-6626-120-1\n";
//     cout << "Name : \tSomchai Cheingpongpan\n";
//     cout << "\" Information Technology \"\n" ;
//     return(0);

// } 



/* Program 2_2 : Display with escape sequence */
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "\'A\' is Charater.\n";
//     cout << "\"Microsoft Visual Studio 2010 Professional\" is String.\n";
//     cout << "A = \101 = \x41 \n";
//     return(0);
// }



/* Program 2_3 : Check size of data type*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "bool \t= " << sizeof(bool) << "bytes." << endl;
//     cout << "char \t= " << sizeof(char) << "bytes." << endl;
//     cout << "short \t= " << sizeof(short) << "bytes." << endl;
//     cout << "int \t= " << sizeof(int) << " bytes." << endl;
//     cout << "long \t= " << sizeof(long) << " bytes." << endl;
//     cout << "float\t= " << sizeof(float) << " bytes." << endl;
//     cout << "double\t= " << sizeof(double) << " bytes." << endl;
//     cout << "long double\t= " << sizeof(long double) << " bytes." <<endl;
//     return (0);
// }



/* Program 2_4 : Check scope value of data type*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Minimum value of char : "<< CHAR_MIN << endl;
//     cout << "Maximum value of char : "<< CHAR_MAX << endl;
//     cout << "Minimum value of short : "<< SHRT_MIN << endl;
//     cout << "Maximum value of short : "<< SHRT_MAX << endl;
//     cout << "Minimum value of int : "<< INT_MIN << endl;
//     cout << "Maximum value of int : "<< INT_MAX << endl;
//     cout << "Minimum value of long : "<< LONG_MIN << endl;
//     cout << "Maximum value of long : "<< LONG_MAX << endl;
//     cout << "Maximum value of unsigned char : "<< UCHAR_MAX << endl;
//     cout << "Maximum value of unsigned short : "<< USHRT_MAX << endl;
//     cout << "Maximum value of unsigned int : "<< UINT_MAX << endl;
//     cout << "Maximum value of unsigned long : "<< ULONG_MAX << endl;
//     return (0);
// }



/*  Program 2_5: Output different base constants  */
// #include<iostream>
// using namespace std;

// int main()
// {
//     cout << "Display integer constants\n"<< endl;
//     cout << "Octal constant 023 is "<< 023 << " decimal\n";
//     cout << "Decimal constant 23 is "<< 23 << " decimal\n";
//     cout << "Hexa constant 0x23 is "<< 0x23 << " decimal\n";
//     return(0);
// }



/*  Program 2_6: Illustrate different forms of floating-point constants that have the same value   */
// #include<iostream>
// using namespace std;

// int main()
// {
//     cout << 230.E+3 << endl;
//     cout << 230E3 << endl;
//     cout << 230000.0 <<endl;
//     cout << 2.3e5 << endl;
//     cout << 0.23E6 << endl;
//     cout << .23e+6 << endl;
//     return(0);
// }



/* Program 2_7: Output the values of uninitialized objects */
// #include<iostream>
// using namespace std;

// int main()
// {
//     float f;
//     int i;
//     char c;
//     double d;
//     cout << "f value is "<< f << endl;
//     cout << "i value is "<< i << endl;
//     cout << "c value is "<< c << endl;
//     cout << "d value is "<< d << endl;
//     return(0);
// }



/* Program 2_8: Output the values of initialized objects */
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string ID = "50-6626-309-1";
//     string Name = "Somchai Cheingpongpan";
//     float Gpa = 2.89;
//     short Age = 20;
//     string Department = "Information Technology";
//     string Room = "1RB";
//     cout << "Student Code : "<< ID << endl;
//     cout << "Student Name : "<< Name << endl;
//     cout << "Department :  "<< Department << endl;
//     cout << "Room : "<< Room << endl;
//     cout << "Age : "<< Age << endl;
//     cout << "Gpa : "<< Gpa << endl;
//     return(0);
// }



/* Program 2_9: Input value string by keyboard */
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string Name;
//     int Age;
//     cout << "Enter name : ";
//     cin >> Name;
//     cout << "Enter age : ";
//     cin >> Age;
//     cout << "\nHello, "<< Name << "."<< endl;
//     cout << "You have "<< Age << " year old."<< endl;
//     cout << "You are beginner programmer."<< endl;
//     return(0);
// }



/* Program2_10: Add 2 value number */
#include<iostream>
using namespace std;

int main()
{
    int Number1, Number2;
    cout << "Program Addition 2 values."<<  endl ;
    /*input two number*/
    cout << "Enter first number : ";
    cin >> Number1;
    cout << "Enter second number : ";
    cin >> Number2;
    /*Diplay addition two value*/ 
    cout << endl; 
    cout << "Sum "<< Number1 << " + "<< Number2;
    cout << " = "<< Number1 + Number2 << endl;
    return(0);
}