/* Program 4_1 : Use if statement */
// #include <iostream>
// using namespace std;

// int main(){
//     int A, B;
//     cout << "Enter value A and B : ";
//     cin >> A >> B;
//     if (A == B) cout << "A and B value are equl" << endl;
//     if (A > B) cout << "A value > value B" << endl;
//     if (A < B) cout << "A value < value B" << endl;
//     return(0);
// }



/* Grade */
// #include <iostream>
// using namespace std;
// int main(){
//     int score;
//     cout << "Enter score : ";
//     cin >> score;
//     // if (score > 100) cout << "Error" << endl;
//     if (score <= 100 && score >= 80) cout << "Grade A" << endl;
//     if (score <= 79 && score >= 75) cout << "Grade B+" << endl;
//     if (score <= 74 && score >= 70) cout << "Grade B" << endl;
//     if (score <= 69 && score >= 65) cout << "Grade C+" << endl;
//     if (score <= 64 && score >= 60) cout << "Grade C" << endl;
//     if (score <= 59 && score >= 55) cout << "Grade D+" << endl;
//     if (score <= 54 && score >= 50) cout << "Grade D" << endl;
//     if (score < 50) cout << "Grade F" << endl;
//     return(0);
//}



/* Program 4_2 : Use if-else statement */
// #include <iostream>
// using namespace std;
// int main(){
//     int year, maxday;
//     cout << "\nEnter year : ";
//     cin >> year;
//     if ((year % 4) == 0){ /* Condition True */
//         cout << "In " << year << " is leap year";
//         maxday = 29;
//     }
//     else {  /* Condition False */
//         cout << "In " << year << " is not leap year";
//         maxday = 28;
//     }
//     cout << "and February has " << maxday << " day.\n";
//     return(0);
// }



/* Grade */
// #include <iostream>
// using namespace std;
// int main(){
//     int score;
//     cout << "\nEnter score : ";
//     cin >> score;
//     if (score <= 100 && score >= 80){
//         cout << "Grade A";
//         return(0);
//     }
//     if (score <= 79 && score >= 75) { 
//         cout << "Grade B+";
//         return(0);
//     }   
//     if (score <= 74 && score >= 70) { 
//         cout << "Grade B";
//         return(0);
//     }
//     if (score <= 69 && score >= 65) { 
//         cout << "Grade C+";
//         return(0);
//     }
//     if (score <= 64 && score >= 60) { 
//         cout << "Grade C";
//         return(0);
//     }
//     if (score <= 59 && score >= 55) { 
//         cout << "Grade D+";
//         return(0);
//     }
//     if (score <= 54 && score >= 50) { 
//         cout << "Grade D";
//         return(0);
//     }
//     else {
//         cout << "Grade F";
//     }
// }



/* Program 4_3 : Use nested if-else statement */
// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout << "\nEnter a charater : ";
//     cin >> ch;
//     cout << endl;
//     if (ch >= 'a' && ch <= 'z')
//         cout << ch << " is lower character.";
//     else if (ch >= 'A' && ch <= 'Z')
//         cout << ch << " is upper charater.";
//     else if (ch >= '0' && ch <= '9')
//         cout << ch << " is numeric.";
//     else cout << ch << " is special charater.";
//     cout << endl;
//     return(0);
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int score;
//     cout << "\nEnter score : ";
//     cin >> score;
//     if (score >= 80){
//         cout << "Grade A";
//     }
//     else if (score >= 75) { 
//         cout << "Grade B+";
//     }   
//     else if (score >= 70) { 
//         cout << "Grade B";
//     }
//     else if (score >= 65) { 
//         cout << "Grade C+";
//     }
//     else if (score >= 60) { 
//         cout << "Grade C";
//     }
//     else if (score >= 55) { 
//         cout << "Grade D+";
//     }
//     else if (score >= 50) { 
//         cout << "Grade D";
//     }
//     else 
//         cout << "Grade F";
//     return(0);
// }



/* Program 4_4 : Use nested switch case statement */
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     cout << "Please enter a simple expression ";
//     cout << "(number operator number) : ";
//     int LeftOperand, RightOperand;
//     char Operator;
//     cin >> LeftOperand >> Operator >> RightOperand;
//     int Result;
//     switch (Operator){
//         case '+' : Result = LeftOperand + RightOperand;
//             break;
//         case '-' : Result = LeftOperand - RightOperand;
//             break;
//         case '*' : Result = LeftOperand * RightOperand;
//             break;
//         case '/' : Result = LeftOperand / RightOperand;
//             break;
//         default : cout << Operator << " is unrecognized operation.";
//                 cout << endl;
//                 return(1);
//     }
//     cout << LeftOperand << "  " << Operator << "  ";
//     cout << RightOperand << " equals " << Result << endl;
//     return(0);
// }



#include <iostream>
using namespace std;
int main(){
    // int water, bread, egg;
    // cout << "Please Enter Number of water bottles donated : ";
    // cin >> water;
    // cout << "Please Enter Number of bread donated : ";
    // cin >> bread;
    // cout << "Please Enter Number of eggs danated : ";
    // cin >> egg;
    cout << 1000%4;
}