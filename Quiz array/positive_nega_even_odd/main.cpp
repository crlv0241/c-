#include <iostream>
using namespace std;

int main()
{
    int findN;
    bool found=false;
    int num[5][2];
    cout << "Enter 10 numbers:" << endl;
    for(int i=0;i<5; i++)
        for(int j=0;j<2;j++)
            cin>>num[i][j];

    cout<<"\nEnter a number to be identified:";
    cin>>findN;

    for(int i=0;i<5; i++)
        for(int j=0;j<2;j++){
            if (findN == num[i][j]){
                found = true;
                cout<<"\nThe number is in the list!\n\n";
                if(findN<0)
                    cout<<findN<<" is negative number\n";
                else
                    cout<<findN<<" is positive number\n";

                if(findN%2==0)
                    cout<<findN<<" is even number";
                else
                    cout<<findN<<" is odd number";

                goto endloop;
            }
        }
    endloop:
    if(!found)
        cout<<"The number is not in the list!";

    return 0;
}
