#include <iostream>
using namespace std;

//sum of the squares from 1 to N
 int findsumOfSquares(int number);
 int squared(int number);
 int findsumOfPowers(int number);

int main()
{
    int num;
    int sumofSquares = 0;
    int sumofPowers = 0;
    cout << "==============================\n";
    cout << "SUM OF THE SQUARES OF Ns" << endl;
    cout << "SUM OF THE POWER OF Ns"<< endl;
    cout << "==============================\n";

    cout << " Enter the value of N:";
    cin >> num;
    sumofSquares = findsumOfSquares(num);
    cout << "The Sum of Squared of 1 to "<<num<<" is "<<sumofSquares<<endl;
    sumofPowers = findsumOfPowers(num);
    cout<<" The sum of powers of N is "<<sumofPowers;

}

//FUNCTIONS


//SQUARED A NUMBER
int squared(int number)
{
    return number * number;
}


//SUM OF SUQARED NUMBERS
int findsumOfSquares(int number)
{
    int sum = 0;
    cout<< "\n SQUARED OF Ns"<<endl;
    for(int i=1; i<= number ; i++)
    {
        sum += squared(i);
    }
    return sum;
}


//SUM OF POWER OF N
int findsumOfPowers(int number)
{
    int sum = 0;
    int power;
    cout<< " POWERS OF Ns"<<endl;
    for(int i=1; i<= number ; i++)
        {
            power = 1;
            for(int j=1; j<=i; j++)
            {
                power *= i;
            }
            cout<<" ("<<i<<")^"<<i<<" = "<<power<<endl;
            sum += power;
        }
    return sum;
}

