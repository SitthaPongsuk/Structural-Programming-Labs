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
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, total = 0, add;
//     do{
//     cout << "Restaurant menu" << endl;
//     cout << "1. Minced Pork Omelet 45 Baht" << endl;
//     cout << "2. Stir Fried Basil with Minced Pork 40 Baht" << endl;
//     cout << "3. Stir Fried Kale with Crispy Pork Belly 55 Baht" << endl;
//     cout << "4. Stir Fried Pork Curry Paste 45 Baht" << endl;
//     cout << "5. Fried Pork with Garlic 45 Baht" << endl;
//     cout << "0. Exit" << endl;
//     cout << "Please select a menu : ";
//     cin >> num;
//     if(num == 1 || num == 4 || num == 5){
//         total += 45;
//         cout << "Want a fried egg(1) or want an omelet(2) or Do not need(0) : ";
//         cin >> add;
//         if(add == 1){
//             total += 5;
//         }
//         else if(add == 2){
//             total += 10;
//         }
//         else{
//             total += 0;
//         }
//     }
//     else if(num == 2){
//         total += 40;
//         cout << "Want a fried egg(1) or want an omelet(2) or Do not need(0) : ";
//         cin >> add;
//         if(add == 1){
//             total += 5;
//         }
//         else if(add == 2){
//             total += 10;
//         }
//         else{
//             total += 0;
//         }
//     }
//     else if(num == 3){
//         total += 55;
//         cout << "Want a fried egg(1) or want an omelet(2) or Do not need(0) : ";
//         cin >> add;
//         if(add == 1){
//             total += 5;
//         }
//         else if(add == 2){
//             total += 10;
//         }
//         else{
//             total += 0;
//         }
//     }
//     }while(num != 0);
//     cout << "Total amount " << total << " Baht" << endl;
//     cout << "Exit of menu selection" << endl;
//     return(0);
// }