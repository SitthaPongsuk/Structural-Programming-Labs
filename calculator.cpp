#include <iostream>
using namespace std;
void plus(int sumplus){
    int nump1 = 0, nump2 = 0;
    cout << "Enter Number1 and Number2 : ";
    cin >> nump1 >> nump2;
    sumplus = nump1 + nump2;
    return sumplus;
}
int main(){
    int sumplus = 0; 
    plus(sumplus);
}