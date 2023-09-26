// #include <iostream>
// using namespace std;
// int main(){
//     int Square[10], i;
//     for(i = 0; i < 10; ++i){
//         Square[i] = i * i;
//         cout << Square[i] << endl;
//     }
//     return(0);
// }



/* 6_1 : การสร้างและใช้งานอาเรย์ 1 มิติ */
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//     int X[10]; //declare and allocate array
//     int Y[] = {10,20,30,40,50,60,70,80,90,100};
//     const int Array_Size = 10;
//     int Z[Array_Size];

//     //Initial value in array
//     for(int i = 0; i < 10; i++){
//         X[i] = 0;
//     }
//     for(int i = 0; i < Array_Size; i++){
//         Z[i] = 2 + 2 * i;
//     }

//     //Display output of array
//     cout << ": Subscript : Array X : Array Y : Array Z;\n";
//     cout << setfill('=') << setw(43) << "=" << endl;
//     cout << setfill(' ');
//     for(int i = 0; i < Array_Size; i++){
//         cout << ": " << setw(6) << i << "   :";
//         cout << setw(6) << X[i] << "   :";
//         cout << setw(6) << Y[i] << "   :";
//         cout << setw(6) << Z[i] << "   :";
//         cout << endl;
//     }
//     cout << setfill('=') << setw(43) << "=" << endl;
//     return(0);
// }



/* 6_2 : การผลรวมของอาเรย์ 1 มิติ */
// #include <iostream>
// using namespace std;
// int main(){
//     //declare and allocate array
//     int A[] = {1,2,3,4,5,6,7,8,9,10};
//     const int Array_Size = 10;
//     int Sum = 0;
//     //Compute sum value in array
//     for(int i = 0; i < Array_Size; i++){
//         Sum = Sum + A[i];
//         cout << Sum << endl;
//     }
//     //Display reault
//     cout << "Total of array element : " << Sum << endl;
//     return(0);
// }



/* 6_3 : การสร้างกราฟแท่งของอาเรย์ 1 มิติ */
// #include <iostream>
// #include <iomanip>
// #include <time.h>
// using namespace std;
// int main(){
//     int Data[10];
//     srand((unsigned int) time(0));
//     //Initial value in array
//     for(int i = 0; i < 10; i++){
//         Data[i] = rand() % 30 + 1;
//     }
//     //Display histogram
//     cout << "Element Value Histogram " << endl << endl;
//     for(int i = 0; i < 10; i++){
//         cout << setw(5) << i << " " << setw(4) << Data[i] << " ";
//         for(int k = 1; k <= Data[i];k++){
//             cout << "*";
//             cout << endl;
//         }
//     }
//     return(0);
// }



/* 6_7 : การใช้งานอาเรย์ 2 มิติ */
// #include <iostream>
// #include <iomanip>
// using namespace std;
// void DisplayArray(int Temp[][4]);
// int main()
// {
//     int Data[3][4];
//     for(int r = 0; r < 3; r++)
//         for(int c = 0; c < 4; c++)  Data[r][c] = (r + 1) * (c + 1);
//     cout << "Value in tha array by row are :" << endl;
//     DisplayArray(Data);
//     return(0);
// }

// void DisplayArray(int Temp[][4])
// {
//     for(int r = 0; r < 3; r++)
//         for(int c = 0; c < 4; c++)
//             cout << setw(5) << Temp[r][c];
//         cout << endl;
// }



/* 6_8 : การใช้งานอาเรย์ 2 มิติ และการส่งค่าผ่าน */
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int Minimum(int Temp[][4], const int Student, const int Exam);
int Maximum(int Temp[][4], const int Student, const int Exam);
double Average(int Temp[], const int Exam);
int main()
{
    const int MaxStudent = 3;
    const int MaxExam = 4;
    int Score[MaxStudent][MaxExam];
    srand((unsigned int) time(0));
    for(int r = 0; r < MaxStudent; r++)
        for(int c = 0; c < MaxExam; c++)
            Score[r][c] = rand() % 30 + 50;
    cout << "      ";
    for(int c = 0; c < MaxExam; c++)
        cout << " [" << c << "]";
    cout << endl;
    for(int r = 0; r < MaxStudent; r++){
        cout << "Score[" << r << "] ";
        for(int c = 0; c < MaxExam; c++)
            cout << setw(5) << Score[r][c];
        cout << endl;
    }
    cout << "\nLowest score : " << Minimum(Score, MaxStudent, MaxExam);
    cout << endl;
    cout << "Highest score : " << Maximum(Score, MaxStudent, MaxExam);
    cout << endl << endl;
    for(int r = 0; r < MaxStudent; r++){
        cout << "Average of student " << r << " is ";
        cout << fixed << setprecision(2) << Average(Score[r], MaxExam);
        cout << endl;
    }
    cout << endl;
    return(0);
}

int Minimum(int Temp[][4], const int Student, const int Exam)
{
    int LowScore = 100;
    for(int r = 0; r < Student; r++){
        for(int c = 0; c < Exam; c++)
            if(Temp[r][c] < LowScore) LowScore = Temp[r][c];
    }
    return LowScore;
}

int Maximum(int Temp[][4], const int Student, const int Exam)
{
    int HighScore = 0;
    for(int r = 0; r < Student; r++){
        for(int c = 0; c < Exam; c++)
            if(Temp[r][c] > HighScore) HighScore = Temp[r][c];
    }
    return HighScore;
}

double Average(int Temp[], const int Exam)
{
    int Total = 0;
    for(int r = 0; r < Exam; r++)
        Total += Temp[r];
    return ((double) Total / Exam);
}