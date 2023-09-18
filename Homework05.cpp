/* 5_3 : โปรแกรมตรวจสอบตัวเลขว่าเป็นตัวเลขจำนวนเฉพาะหรือไม่ */
#include <iostream>
using namespace std;
bool CheckPrime(int num){
    if(num <= 1){ //ตัวเลขที่น้อยกว่าหรือเท่ากับ 1 ไม่ใช่จำนวนเฉพาะ
       return false; //คืนค่าเป็น false
    }

    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;

    return true; //ถ้าไม่เข้าเงื่อนไขในลูปเลย คืนค่าเป็น true เป็นจำนวนเฉพาะ
} 

int main(){
    int num;
    cout << "Enter Number : ";
    cin >> num;
    bool isPrime = CheckPrime(num);
    if(isPrime){
        cout << num << " Is a prime number" << endl;
    }
    else{
        cout << num << " Not a prime number" << endl;
    }
    return(0);
}



/* 5_4 : โปรแกรมเพื่อคำนวณหาจำนวนเงินฝากธนาคาร */
// #include <iostream>
// using namespace std;
// double calinterest(double principle, double year, double interest);
// int main(){
//     double principle, year, interest;
//     cout << "Enter Principle : ";
//     cin >> principle;
//     cout << "Enter Year : ";
//     cin >> year;
//     cout << "Enter Interest : ";
//     cin >> interest;
//     cout << endl;
//     for(int i = 1; i <= year; i++){
//         double amount = calinterest(principle, i, interest);
//         cout << "Year " << i << " Deposit " << amount << endl;
//     }
//     return(0);
// }
// double calinterest(double principle, double year, double interest){
//     if(year == 0){
//         return principle;
//     }else{
//         principle+=(principle*(interest/100));
//     return calinterest(principle, year - 1, interest);
//     }
    // double in = (principle * interest) / 100;
    // double de = principle + in;
    // principle += de;
    // double sum = principle * interest;
    // principle += sum;
// }