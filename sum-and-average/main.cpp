#include <iostream>
using namespace std;
void show(int numbers[]){
    cout<<"\n Entered Values:";
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
    cout<<"\n\n           *** Overview ***";
    cout<<"\n    This program will compute the sum and"
          "\n         the average of 5 numbers"
          "\n******************************************";
    for(int i=0;i<5;++i){
        cout<<"\n Enter a number:";
        cin>>numbers[i];
        sum+=numbers[i];
        show(numbers);
    }
    cout<<"";
    return 0;

}
