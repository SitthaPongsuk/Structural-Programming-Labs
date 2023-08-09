#include <iostream>
using namespace std;
int main()
{
    float loan, interest, payment, overdue_money, Total_payment;
    cout << "Input Loan Interest Payment :" << endl;
    cin >> loan >> interest >> payment;
    cout << endl;
    for (int i = 1; i <= 47; i++){
        overdue_money = (loan - payment) * (1 + interest / 100);
        loan = overdue_money;
        cout << i << " " << overdue_money << endl;
        if (i == 47){
            cout << "Number of Year " << i << endl;
            Total_payment = payment * i + loan;  
            cout << "Total Payment " << Total_payment << endl;
        }
    }
    return(0);
}