#include <iostream>
using namespace std;

int main()
{
    int n;
    bool found=false;
    int num[2][5];
    cout << "Enter 10 numbers:" << endl;
    for(int i=0;i<2; i++){
        for(int j=0;j<5;j++){
            cin>>num[i][j];
        }
    }

    cout<<"\nEnter a number to be identified:";
    cin>>n;

    for(int i=0;i<5; i++)
        for(int j=0;j<2;j++){
            if (n == num[i][j]){
                found = true;
                cout<<"The number is in the list!\n\n";
                if(n<0)
                    cout<<n<<" is negative number\n";
                else
                    cout<<n<<" is positive number\n";
                if(n%2==0){
                    cout<<n<<" is even number";
                    break;}
                else{
                    cout<<n<<" is odd number";
                    break;}
            }
        }
    if(!found)
        cout<<"\nThe number is not in the list!\n\n";
    return 0;
}
