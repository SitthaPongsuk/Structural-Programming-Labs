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
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, A = 5, B = 2, C = 11, D = 4, E = 3, F = 7;

    cout << "Result of (A - D) * F % B = ";
    sum = (A - D) * F % B;
    cout << sum << endl;

    cout << "Result of (A % D -E) + B * C = ";
    sum = (A % D -E) + B * C;
    cout << sum << endl;

    cout << "Result of F / (D + E - B * A) % C = ";
    sum = F / (D + E - B * A) % C;
    cout << sum << endl;

    return(0);
}