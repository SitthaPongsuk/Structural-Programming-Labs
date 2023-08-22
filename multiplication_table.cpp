#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    do{
    cout << "Enter number 2 to 50 : ";
    cin >> num;
    cout << endl;
    if (num >= 2 && num <= 50){
    for (int i = 1; i <= 12; i++){  
        cout << num <<right<<setw(3) << "*" <<right<<setw(3)  << i  <<right<<setw(3)<< "=" <<right<<setw(4) << num*i;
        cout <<right<<setw(5) << num+1 <<right<<setw(3) << "*" <<right<<setw(3)  << i  <<right<<setw(3)<< "=" <<right<<setw(4) << (num+1)*i; 
        cout <<right<<setw(5) << num+2 <<right<<setw(3) << "*" <<right<<setw(3)  << i  <<right<<setw(3)<< "=" <<right<<setw(4) << (num+2)*i << endl;
    }
    }
    }while (num < 2 || num > 50);
    return(0);
}