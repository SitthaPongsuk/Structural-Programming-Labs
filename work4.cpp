/* Program 1 : Grade */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int score;
//     cout << "Enter Score : ";
//     cin >> score;
//     cout << endl;
//     if (score <= 100 && score >= 90){
//         cout << "Grade A";
//         return(0);
//     }
//     if (score <= 89 && score >= 80){
//         cout << "Grade B";
//         return(0);
//     }
//     if (score <= 79 && score >= 70){
//         cout << "Grade C";
//         return(0);
//     }
//     if (score <= 69 && score >= 60){
//         cout << "Grade D";
//         return(0);
//     }
//     else {
//         cout << "Grade F";
//     }
// }



/* Program 2 : triangle */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     string Str;
//     cout << "Input number line : ";
//     cin >> num;
//     cout << "Input character : ";
//     cin >> Str;
//     cout << endl;
//     for(int i = 1; i <= num; i++)
//         {
//         for(int j = 1; j <= i; j++)
//             {
//                 cout << Str;
//             }
//                 cout << "\n";
//         }
//     return(0);
// }



/* Program 3 : Check letters */
// #include <iostream>
// #include <string>
// #include <ctype.h>
// using namespace std;
// int main()
// {
//     string text;
//     int upper=0, lower=0, space=0, special=0;
//     cout << "Enter message : ";
//     getline(cin, text);
//     for (int i = 0; i < text.length(); i++){
//         if(isupper(text.at(i))){
//             upper++;
//         }
//         else if(islower(text.at(i))){
//             lower++;
//         }
//         else if(text.at(i) == ' '){
//             space++;
//         }
//         else{
//             special++;
//         }
//     }
//     cout << "Your messege have " << upper << " upper character" << endl;
//     cout << "Your messege have " << lower << " lower character" << endl;
//     cout << "Your messege have " << space << " space character" << endl;
//     cout << "Your messege have " << special << " special character" << endl;
//     return(0);
// }



/* Program : restaurant */
#include <iostream>
using namespace std;
int main()
{
    
}