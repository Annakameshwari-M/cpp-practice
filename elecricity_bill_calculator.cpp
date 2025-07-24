/*Ask the user to input the number of units of electricity they consumed.

Then calculate the total bill based on this tiered pricing:

Units Range	Price per Unit
0 – 100	₹1
101 – 200	₹1.5
201 – 300	₹2
301 and above	₹3

Output the total bill amount.
*/
#include <iostream>
using namespace std;

int main(){

    int units;
    float bill = 0;

    cout << "Enter the unit consumed : ";
    cin >> units;

    if (units <= 100){
        bill = units * 1.0;
    }
    else if (units <= 200){
        bill = 100 * 1.0 +(units -100) *1.5; 
         
    }
     else if (units <= 300){
       bill = 100 * 1.0 + 100 * 1.5 + (units - 200) * 2.0;
    }
     else{
       bill = 100 * 1.0 + 100 * 1.5 + 100 * 2 + (units - 300) * 3.0;
         
    }
    
    cout << "Total Electricity Bill = ₹ " << bill << endl;

    return 0;

}