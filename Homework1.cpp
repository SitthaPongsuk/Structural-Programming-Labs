#include <iostream>
using namespace std;

int main()
{
    int pen, pencil, ruler, total;
    cout << "Enter number of pen: ";
    cin >> pen;
    cout << "Enter number of pencil: ";
    cin >> pencil;
    cout << "Enter number of ruler: ";
    cin >> ruler;
    total = (pen*5) + (pencil*2) + (ruler*8);
    if (total > 300){
        if(pen%2 == 0 && pencil%2 && ruler%2){
            cout << "Order is OK" << endl;
            cout << "Total price = " << total;
        }
        else{
            cout << "Invalid order";
        }
    }
    else if (total > 200){
        if(pencil%2 == 0 && ruler%2 == 0){
            cout << "Order is OK" << endl;
            cout << "Total price = " << total;
        }
        else{
            cout << "Invalid order";
        }
    }
    else if (total > 100){
        if(ruler%2 == 0){
            cout << "Order is OK" << endl;
            cout << "Total price = " << total;
        }
        else{
            cout << "Invalid order";
        }
    }
    else{
        cout << "Order is OK" << endl;
        cout << "Total price = " << total;
    }
    return(0);
}



// #include <iostream> 
// using namespace std; 
// int main() 
// { 
//     cout << "Welcome to my world!" << endl; 
//     const float pi = 3.14159; 
//     short fav1, fav2; 
//     cout << "Please enter 2 of your favorite integers: "; 
//     cin >> fav1, fav2; 
//     int a33 = fav1 + fav2;
//     float b33 = abs(float(fav1 - fav2)); 
//     cout << "You will get married at age: " << a33 << endl; 
//     cout << "You will have " << b33 << " children" << endl; 
//     cout << "Good luck! Bye ^^" << endl; 
//     return 0; 
// }