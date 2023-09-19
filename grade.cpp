// #include <iostream>
// #include <time.h>
// using namespace std;
// int main(){
//     int score = 0, count = 100, a = 0, bp = 0, b = 0, cp = 0, c = 0, dp = 0, d = 0, f = 0;
//     srand((unsigned int) time(0));
//     for(int i = 1;i <= count; i++){
//         score = rand() % 100 + 1;
//         if(score >= 80){
//             a++;
//         }
//         else if(score >= 75){
//             bp++;
//         }
//         else if(score >= 70){
//             b++;
//         }
//         else if(score >= 65){
//             cp++;
//         }
//         else if(score >= 60){
//             c++;
//         }
//         else if(score >= 55){
//             dp++;
//         }
//         else if(score >= 50){
//             d++;
//         }
//         else{
//             f++;
//         }
//     }
//     cout << "Resulf Num of grade A  : " << a << endl;
//     cout << "Resulf Num of grade B+ : " << bp << endl;
//     cout << "Resulf Num of grade B  : " << b << endl;
//     cout << "Resulf Num of grade C+ : " << cp << endl;
//     cout << "Resulf Num of grade C  : " << c << endl;
//     cout << "Resulf Num of grade D+ : " << dp << endl;
//     cout << "Resulf Num of grade D  : " << d << endl;
//     cout << "Resulf Num of grade F  : " << f << endl;
//     return(0);
// }



#include <iostream>
#include <time.h>
using namespace std;
int random(){
    srand((unsigned int) time(0));
    int score = rand() % 100 + 1;
    return score;
}
void countgrade(int score,int &a,int &bp,int &b,int &cp,int &c,int &dp,int &d,int &f){
     if(score >= 80){
            a++;
        }
        else if(score >= 75){
            bp++;
        }
        else if(score >= 70){
            b++;
        }
        else if(score >= 65){
            cp++;
        }
        else if(score >= 60){
            c++;
        }
        else if(score >= 55){
            dp++;
        }
        else if(score >= 50){
            d++;
        }
        else{
            f++;
        }
}
void display(int score,int &a,int &bp,int &b,int &cp,int &c,int &dp,int &d,int &f){
    cout << "Resulf Num of grade A  : " << a << endl;
    cout << "Resulf Num of grade B+ : " << bp << endl;
    cout << "Resulf Num of grade B  : " << b << endl;
    cout << "Resulf Num of grade C+ : " << cp << endl;
    cout << "Resulf Num of grade C  : " << c << endl;
    cout << "Resulf Num of grade D+ : " << dp << endl;
    cout << "Resulf Num of grade D  : " << d << endl;
    cout << "Resulf Num of grade F  : " << f << endl;
}
int main(){
    int score = 0, count = 100, a = 0, bp = 0, b = 0, cp = 0, c = 0, dp = 0, d = 0, f = 0;
    
    for(int i = 1;i <= count; i++){
        score = random();
        countgrade(score,a,bp,b,cp,c,dp,d,f);
    }
    display(score,a,bp,b,cp,c,dp,d,f);
    return(0);
}