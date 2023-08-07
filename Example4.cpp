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
//     if (Operator == '+'){
//         Result = LeftOperand + RightOperand;
//         cout << LeftOperand << "  " << Operator << "  ";
//         cout << RightOperand << " equals " << Result << endl;
//         return(0);
//     }
//     else if (Operator == '-'){
//         Result = LeftOperand - RightOperand;
//         cout << LeftOperand << "  " << Operator << "  ";
//         cout << RightOperand << " equals " << Result << endl;
//         return(0);
//     }
//     else if (Operator == '*'){
//         Result = LeftOperand * RightOperand;
//         cout << LeftOperand << "  " << Operator << "  ";
//         cout << RightOperand << " equals " << Result << endl;
//         return(0);
//     }
//     else if (Operator == '/') {
//         Result = LeftOperand / RightOperand;
//         cout << LeftOperand << "  " << Operator << "  ";
//         cout << RightOperand << " equals " << Result << endl;
//         return(0);
//     }
// }



/* Program 4_5 : Calculate Area */
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     char Choice;
//     float Area;
//     cout << " Program Calculate Area " << endl;
//     cout << " 1.Circle" << endl;
//     cout << " 2.Rectangle" << endl;
//     cout << " 3.Exit" << endl;
//     cout << "Enter your choose number : ";
//     cin >> Choice;
//     if(Choice == '1'){
//         float Radius;
//         cout << "\nEnter radius : ";
//         cin >> Radius;
//         Area = 3.14159F * Radius * Radius;
//         cout << "Area of Circle = " << Area << endl;
//     }
//     else if(Choice == '2'){
//         float Length, Width;
//         cout << "Enter length and width : ";
//         cin >> Length >> Width;
//         Area = Length * Width;
//         cout << "Area of Rectangle = " << Area << endl;
//     }
//     else if(Choice == '3') cout << "\n...Exit Program...\n";
//     else cout << "\nYou choose out of range is not process.\n";
//     return(0); 
// }



// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     char Choice;
//     float Area;
//     cout << " Program Calculate Area " << endl;
//     cout << " 1.Circle" << endl;
//     cout << " 2.Rectangle" << endl;
//     cout << " 3.Exit" << endl;
//     cout << "Enter your choose number : ";
//     cin >> Choice;
//     switch (Choice){
//         case '1' : float Radius;
//                     cout << "\nEnter radius : ";
//                     cin >> Radius;
//                     Area = 3.14159F * Radius * Radius;
//                     cout << "Area of Circle = " << Area << endl;
//                     break;
//         case '2' : float Length, Width;
//                     cout << "Enter length and width : ";
//                     cin >> Length >> Width;
//                     Area = Length * Width;
//                     cout << "Area of Rectangle = " << Area << endl;
//                     break;
//         case '3' : cout << "\n...Exit Program...\n";
//         default : cout << "\nYou choose out of range is not process.\n";
//     }
//     return(0); 
// }



/* Program 4_6 : Use for statement */
// #include <iostream>
// using namespace std;
// int main()
// {
//     /* Use sequential structure */
//     cout << 1;
//     cout << 2;
//     cout << 3;
//     cout << 4;
//     cout << 5;
//     cout << endl;
//     /* Use loop structure */
//     for (int n = 1;  n <= 5; n++) cout << n;
//     cout << endl;
//     return(0);
// }



/* Program 4_7 : Use for statement */
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int Number;
//     string Name;
//     cout << "Enter String : ";
//     cin >> Name;
//     cout << "Enter number : ";
//     cin >>  Number;
//     for (int n = 1; n <= Number; n++)
//             cout << n << "." << Name << endl;
//     cout << endl;
//     return(0);
// }



/* Program 4_8 : Use for statement */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int Num;
//     cout << "Enter number : ";
//     cin >> Num;
//     int Sum = 0;
//     int Value;
//     for (int n = 1; n <= Num; n++){
//         cout << "Enter integer value(" << n <<"):";
//         cin >> Value;
//         Sum = Sum + Value;
//     }
//     cout << "\nSummation of integer " << Num;
//     cout << "\nvalue = " << Sum << endl;
//     return(0);
// }



/* Program 4_9 : Use while Statement */
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Display sqaure of number 1 to 10.\n";
//     cout << "=========================================";
//     cout << "\tX\t^2\n";
//     cout << "=========================================";
//     int X = 1;
//     /* display value power 2 */
//     while (X <= 10){
//         cout << "\t" << X << "\t" << X * X << endl;
//         X++;
//     }
//     return(0);
// }



/* Program 4_10 : Use while statement */
#include <iostream>
using namespace std;
int main()
{
    int ListSize = 5;
    int ValuesProcessed = 0;
    float ValueSum = 0;
    cout << "Plase enter " << ListSize << " numbers" << endl;
    while (ValuesProcessed < ListSize){
        float Value;
        cin >> Value;
        ValueSum += Value;
        ++ValuesProcessed;
    }
    float Average = ValueSum / ValuesProcessed;
    cout << "Average : " << Average << endl;
    return(0);
}



// #include <iostream>
// using namespace std;
// int main(){
//     int water, bread, egg, w, b, e;
//     cout << "Please Enter Number of water bottles donated : ";
//     cin >> water;
//     cout << "Please Enter Number of bread donated : ";
//     cin >> bread;
//     cout << "Please Enter Number of eggs danated : ";
//     cin >> egg;

//     w = water / 3;
//     b = bread / 4;
//     e = egg / 2;
//     if (w > b){
//         w = b;
//     }
//     if (w > e){
//         w = e;
//     }
//     int bag = w;
//     cout << "Result of Donation bag : "<< bag << endl;

//     int ww, bb, ee;
//     ww = water - (bag * 3);
//     bb = bread - (bag * 4);
//     ee = egg - (bag * 2);

//     cout << "Tha remaining amount of donation water bottles : " << ww <<endl;
//     cout << "Tha remaining amount of donation breade : " << bb <<endl;
//     cout << "Tha remaining amount of donation eggs : " << ee <<endl;
//     return(0);
// }