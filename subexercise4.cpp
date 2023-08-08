/* Program for accepting rice weight and moisture content */
// #include <iostream>
// using namespace std;
// int main()
// {
//     float weight, moisture, mois, netweight;
//     cout << "Please enter total weight : ";
//     cin >> weight;
//     cout << "Please enter rice moisture : ";
//     cin >> moisture;
//     if(moisture < 15){
//         mois = 0;
//         }
//     else if(moisture >= 15.0 && moisture <= 15.9){
//         mois = 0.01 * weight;
//         }
//     else if(moisture >= 16.0 && moisture <= 17.9){
//         mois = 0.02 * weight;
//         }
//     else if(moisture >= 18.0 && moisture <= 19.9){
//         mois = 0.05 * weight;
//         }
//     else {
//         mois = 0.08 * weight;
//     }
//     cout << "Deducted weight : " << mois << endl;
//     cout << "Net Weight : " << weight << endl;
//     netweight = (weight - mois) * 15;
//     cout << "Payment : " << netweight << endl;
//     return(0);
//}



/* Program accepts integer value X */
// #include <iostream>
// using namespace std;
// int main()
// {
//     float x, y;
//     cout << "Enter integer : ";
//     cin >> x;
//     cout << endl;
//     if (x > 0){
//         y = (2 * x + 4) / (x + 1);
//     }
//     else {
//         y = -2 * ((x + 10) / 3);
//     }
//     cout << y << endl;
//     return(0);
// }



/* Program accepts integer value X, N */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 0, n = 0; 
//     float y = 0;
//     cout << "Input x and n : ";
//     cin >> x >> n;
//     cout << endl;
//     for (int i = 1; i <= n; i++){
//         y += (float) 1 / (i * x) ;
//     }
//     cout << "y = "<< y << endl;
//     return(0);
// }
