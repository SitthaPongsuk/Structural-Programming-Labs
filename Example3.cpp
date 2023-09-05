/* Program 3_1 : Use arithmetic operators */
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Result of 3 / 2 + 5 = " << 3 / 2 + 5 << endl;
//     cout << "Result of 5 / 1 + 2 = " << 5 / 1 + 2 << endl;
//     cout << "Result of 3 * 2 + 4 * 5 = " << 3 * 2 + 4 * 5 << endl;
//     cout << "Result of 4 - 2 + 5 / 3 + 2 = " << 4 - 2 + 5 / 3 + 2 << endl;
//     cout << "Result of 10 - 2 + 7 % 2 - 1 = " << 10 - 2 + 7 % 2 - 1 << endl;
//     return(0);
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Result of 3 / 2 + 5 = " << (3 / 2) + 5 << endl;
//     cout << "Result of 5 / 1 + 2 = " << (5 / 1) + 2 << endl;
//     cout << "Result of 3 * 2 + 4 * 5 = " << (3 * 2) + 4 * 5 << endl;
//     cout << "Result of 4 - 2 + 5 / 3 + 2 = " << 4 - 2 + (5 / 3) + 2 << endl;
//     cout << "Result of 10 - 2 + 7 % 2 - 1 = " << 10 - 2 + (7 % 2) - 1 << endl;
//     return(0);
// }



/* Program 3_2 : compute eqation = X*X*X + 3*X - 10 */
// #include <iostream>
// using namespace std;

// int main()
// {
//     float X;
//     cout << "Enter value X : ";
//     cin >> X;
//     float Result(0);
//     Result = X * X * X + 3 * X - 10;
//     cout << "\nResult of X * X * X + 3 * X - 10 = ";
//     cout << Result << endl;
//     return(0);
// }



/* Program 3_3 : Use relation and logical operator */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int A, B;
//     cout << "Enter first number(A) : ";
//     cin >> A;
//     cout << "Enter second number(B) : ";
//     cin >> B;
//     cout << "\nTesting usage operator\n";
//     cout << "=============================\n";
//     cout << " A < B = " << (A < B) << endl;
//     cout << " A <= B " << (A <= B) << endl;
//     cout << " A > B " << (A > B) << endl;
//     cout << " A >= B " << (A >= B ) << endl;
//     cout << " A == B " << (A == B ) << endl;
//     cout << " A != B " << (A != B) << endl;
//     cout << " A && B " << (A && B) << endl;
//     cout << " A || B " << (A || B) << endl;
//     cout << "!A = " << !A << ", !B = " << !B << endl;
//     return(0);
// }



/* Program 3_4 : Use increment and decrement operator */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int A, B;
//     cout << "Enter first number(A) : ";
//     cin >> A;
//     cout << "Enter second number(B) : ";
//     cin >> B;cout << endl;
//     cout << " Before A = "<< A << endl;
//     cout << " ++A = "<< ++A << endl;
//     cout << " After A = "<< A << endl;
//     cout << " Before A = "<< A << endl;
//     cout << " A++ = "<< A++ << endl;
//     cout << " After A = "<< A << endl << endl;
//     cout << " Before B = "<< B << endl;
//     cout << " --B = "<< --B << endl;
//     cout << " After B = "<< B << endl;
//     cout << " Before B = "<< B << endl;
//     cout << " B--= "<< B--<< endl;
//     cout << " After B = "<< B << endl;
//     return(0);
// }



/* Program 3_5 : Use assignment operator */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int X = 10;
//     cout << "X = "<< X << endl;
//     X += 1; 
//     cout << "X += 1; \tX = 10 + 1 = "<< X << endl;
//     X -= 1;
//     cout << "X -= 1; \tX = 11 + 1 = "<< X << endl;
//     X *= 3;
//     cout << "X *= 3; \tX = 10 * 3 = "<< X << endl;
//     X /= 3;
//     cout << "X /= 3; \tX = 30 / 3 = "<< X << endl;
//     X%= 3;
//     cout << "X %= 3; \tX = 10 % 3 = "<< X << endl;
//     return(0);
// }



/* Program 3_6 : Use condition operator */
// #include <iostream>
// using namespace std;

// int main()
// {
    
//     int Number;
//     cout << "Enter number : ";
//     cin >> Number;
//     cout << Number << " is "<< ((Number%2)== 0 ? "even ": "odd ") ;
//     cout << " number."<< endl;
//     return(0);
// }



/* Program 3_7: Use Bitwise operator */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter integer number : ";
//     cin >> n;
//     cout << endl;
//     cout << "n = "<< n << endl;
//     cout << "n >> 1 = "<< (n >> 1) << endl;
//     cout << "n << 1 = "<< (n << 1) << endl;
//     cout << "n & 8 = "<< (n & 8) << endl;
//     cout << "n | 15 = "<< (n | 15) << endl;
//     cout << "n ^ 10 = "<< (n ^ 10) << endl;
//     return(0);
// }



/* Program 3_8: Use type conversion */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int Number1, Number2, Number3;
//     cout << "Enter first number : ";
//     cin >> Number1;cout << "Enter second number : ";
//     cin >> Number2;cout << "Enter third number : ";
//     cin>> Number3;
//     float Average; 
//     Average = static_cast<float>(Number1 + Number2 + Number3) / 3;
//     cout << "\nAverage of 3 number = "<< Average << endl;
//     return(0);
// }



/* Program 3_9: Compute tax */
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     float Price, Tax, Total, Tax_Rate = 0.07f;
//     string ProductName;
//     cout << "Enter product name : ";
//     cin >> ProductName;
//     cout << "Enter product price : ";
//     cin >> Price;cout << endl; 
//     /*case 1*/
//     Tax = Price * Tax_Rate;
//     Total = Price + Tax;
//     /*case 2
//     Total = Price + Price * Tax_Rate;*/
//     cout << "Price of "<< ProductName << " = " << Price << endl;
//     cout << "Tax(%7) of "<< ProductName << " = " << Tax << endl;
//     cout << "Total Price of "<< ProductName << " = " << Total <<endl;
//     return(0);
// }



/* 3 */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum = 0, A = 10, B = 7, C = 3, D = 6, E = 1, F = 2;

//     cout << "Result of A / F - C * B + E = ";
//     sum = A / F - C * B + E;
//     cout << sum << endl;

//     cout << "Result of B + C * E - F % A = ";
//     sum = B + C * E - F % A;
//     cout << sum << endl;

//     cout << "Result of E * B * D - F % A = ";
//     sum = E * B * D - F % A;
//     cout << sum << endl;

//     cout << "Result of C % F + A + B / E = ";
//     sum = C % F + A + B / E;
//     cout << sum << endl;

//     cout << "Result of A - B * E / B % D = ";
//     sum = A - B * E / B % D;
//     cout << sum << endl;

//     cout << "Result of F * A - D + E * D = ";
//     sum = F * A - D + E * D;
//     cout << sum << endl;

//     cout << "Result of A * D - B + B * D = ";
//     sum = A * D - B + B * D;
//     cout << sum << endl;

//     cout << "Result of D / E % A + F - D = ";
//     sum = D / E % A + F - D;
//     cout << sum << endl;

//     cout << "Result of E % A - B * C - A = ";
//     sum = E % A - B * C - A;
//     cout << sum << endl;

//     cout << "Result of B + F - B % E *F = ";
//     sum = B + F - B % E *F;
//     cout << sum << endl;

//     return(0);
// }



/* 4 */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum = 0, A = 5, B = 2, C = 11, D = 4, E = 3, F = 7;

//     cout << "Result of (A - D) * F % B = ";
//     sum = (A - D) * F % B;
//     cout << sum << endl;

//     cout << "Result of (A % D -E) + B * C = ";
//     sum = (A % D -E) + B * C;
//     cout << sum << endl;

//     cout << "Result of F / (D + E - B * A) % C = ";
//     sum = F / (D + E - B * A) % C;
//     cout << sum << endl;

//     return(0);
// }