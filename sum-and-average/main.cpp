#include <iostream>
using namespace std;
void show(int numbers[]){
    for(int i=0;i<5;i++)
        cout<<" "<<numbers[i];
}
int main()
{
    int numbers[5]={0,0,0,0,0};
    double sum =0,average =0;
    cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    cout << "\n\t SUM AND AVERAGE OF 5 NUMBERS" << endl;
    cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    cout<<"\n             *** Overview ***";
    cout<<"\n    This program will compute the sum and"
          "\n         the average of 5 numbers"
          "\n********************************************";
    for(int i=0;i<5;++i){
        cout<<"\n Enter a number:";
        cin>>numbers[i];
        sum+=numbers[i];
        cout<<"\n Entered Values:";
        show(numbers);
    }
    average = sum/(double)5;
    cout<<"\n\nThe sum of ",show(numbers),cout<<" is "<<sum;
    cout<<"\nThe average of ",show(numbers),cout<<" is "<<average<<endl<<endl;
    return 0;
}
