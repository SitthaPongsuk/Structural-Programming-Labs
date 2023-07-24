/* 3_3 Program to convert temperature from Fahrenheit to Celsius  */
// #include <iostream>
// using namespace std;

// int main()
// {
//     float Fahrenheit, Celsius;
//     cout << " Enter Fahrenheit temperature : ";
//     cin >> Fahrenheit;
//     cout << endl;
//     Celsius = (5.0 / 9.0) * (Fahrenheit - 32);  
//     cout << " Convert temperature from Fahrenheit to Celsius : " << Celsius;
//     return(0);
// }



/* 3_4 Program to accept integers */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter number : ";
//     cin >> num;
//     int num1 = num / 1000; 
//     int num2 = (num / 100) % 10; 
//     int num3 = (num / 10 ) % 10; 
//     int num4 = num % 10;
//     cout << num1 << "   " << num2 << "   " << num3 << "   " << num4 << "   ";
//     return(0);
// }



/* 3_5 Program to convert binary numbers to decimal */
// #include <iostream>
// using namespace std;

// int binaryToDecimal(int binary) {
//     int decimal = 0;
//     int base = 1;
//     while (binary > 0) {
//         int lastDigit = binary % 10;
//         decimal += lastDigit * base;
//         base *= 2;
//         binary /= 10;
//     }
//     return decimal;
// }

// int main()
// {
//     int binaryNumber;
//     cout << "Enter binary number : ";
//     cin >> binaryNumber;
//     int decimalNumber = binaryToDecimal(binaryNumber);
//     cout << "Decimal value of" << " " << binaryNumber << " " << "="  << " " << decimalNumber;
//     return(0);
// }



/* 3_6 Program calculates the average speed of the car */
#include <iostream>
using namespace std;

int main()
{
    float skilo, ekilo, distance, hour, minute, second,min, sec, time, ave;
    cout << "Data inputs are interger!." << endl;
    cout << "Enter start kilometer : ";
    cin >> skilo;
    cout << "Enter end kilometer : ";
    cin >> ekilo;
    cout << "Enter time used(hour) : ";
    cin >> hour;
    cout << "Enter time used(minute) : ";
    cin >> minute;
    cout << "Enter time used(second) : ";
    cin >> second;
    cout << endl;
    distance = ekilo - skilo;
    cout << "Car traveled" << " " << distance << " " << "kilometers in " << " " << hour << " " << "hrs" << " " << minute << " " << "min" << " " << second << " " << "sec." << endl;
    min = minute / 60;
    sec = second / 3600;
    time = hour + min + sec;
    ave = distance / time;
    cout << "Average velocity was " << ave << " " << "kph." << endl;
    return(0);
}