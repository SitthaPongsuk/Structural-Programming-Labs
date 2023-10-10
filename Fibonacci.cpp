#include <iostream>
using namespace std;
bool FineFibonucci(int n);
int main()
{
    int n = 0;
    do{
        cout << "Enter Number (integer > 0) : ";
        cin >> n;
        if(n <= 0){
            cout << "Input Error";
        }
        cout << endl;
    }
    while(n <= 0);
    if(FineFibonucci(n) == true){
        cout << "Number " << n << " is Fibonucci.";
    }
    else{
        cout << "Number " << n << " is not Fibonucci.";
    }
    return(0);
}
bool FineFibonucci(int n)
{
    bool flag = false;
    int F1 = 1, F2 = 1, FN = 0;
    if(n == 1) flag = true;
    while (true)
    {
        FN = F2 + F1;
        F1 = F2;
        F2 = FN;
        if(FN == n){
            flag = true;
            break;
        }
        if(FN > n){
            break;
        }
    }
    return flag;
}