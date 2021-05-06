#include <iostream>
#include <iomanip>//allows stream manipulators
using namespace std;
//function prototypes
void user_input (int& a, int& b, int& c);
void a_income (int& a, float& aTotal);
void b_income (int& b, float& bTotal);
void c_income (int& c, float& cTotal);
//global constant
const float A_PRICE = 15.00, B_PRICE = 12.00, C_PRICE = 9.00; 

int main()
{
    //declaring main function variables
    int classA, classB, classC;
    float aTotal, bTotal, cTotal;
    
    cout << "This program calculates the total revenue gained from ";
    cout << endl;
    cout << "the sale of Class A, Class B, and Class C tickets.";
    cout << endl << endl;
    //calling functions
    user_input (classA, classB, classC);
    a_income (classA, aTotal);
    b_income (classB, bTotal);
    c_income (classC, cTotal);

    return 0;
}
//input function
void user_input (int& a, int& b, int& c)
{
    cout << "Please enter the number of Class A tickets sold. ";
    cin >> a;
    cout << "Please enter the number of Class B tickets sold. ";
    cin >> b;
    cout << "Please enter the number of Class C tickets sold. ";
    cin >> c;
    cout << endl;
}
//processing and output
void a_income (int& a, float& aTotal)
{
    aTotal = a * A_PRICE;
    cout << "Your total revenue from Class A tickets = $";
    cout << setprecision(2) << fixed << aTotal << endl;
}
//processing and output
void b_income (int& b, float& bTotal)
{
    bTotal = b * B_PRICE;
    cout << "Your total revenue from Class B tickets = $";
    cout << setprecision(2) << fixed << bTotal << endl;
}
//procesing and output
void c_income (int& c, float& cTotal)
{
    cTotal = c * C_PRICE;
    cout << "Your total revenue from Class C tickets = $";
    cout << setprecision(2) << fixed << cTotal << endl;
}