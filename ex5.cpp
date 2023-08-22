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



