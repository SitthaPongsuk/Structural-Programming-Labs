#include <iostream>
#include <cstring>
using namespace std;
string monthmini(int m);
string monthmax(int m);
string stopday(int d, int m);
int main()
{
    string date, str, m_max, m_mini, day, year, stopdayy;
    int m, d;
    cout << "Plase enter date (dd/mm/yyyy) : ";
    cin >> date;
    str = date.substr(3, 2);
    day = date.substr(0, 2);
    year = date.substr(6, 4);
    m = atoi(str.c_str());
    d = atoi(str.c_str());
    m_max = monthmax(m);
    m_mini = monthmini(m);
    stopdayy = stopday(d, m);
    cout << "Format 1 : " << m_max << " " << day << ", " << year << endl;
    cout << "Format 2 : " << day << " " << m_mini << " " << year << endl;
    cout << day << " " << m_max << " is " << stopdayy << endl;
    return(0);
}

string monthmax(int n)
{
    string m[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dem"};
    return(m[n - 1]);
}
string monthmini(int n)
{
    string m[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return(m[n - 1]);
}
string stopday(int d, int m)
{
    string s = "stopday";
    if(m == 1 && d == 1 || d == 2){
        return s;
    }
}