#include <iostream>
using namespace std;

int main()
{
    int arr_size=0,low_location=0,high_location=0,lowest, highest;
    while(true){
        cout << "Enter array desired array size.(1-10):";
        cin>>arr_size;
        if(arr_size<11 && arr_size>0)
            break;
        cout<<"\nINVALID INPUT, PLEASE CHOOSE A SIZE FROM 1-10"<<endl;
    }

    int num[arr_size];

    cout<<"\nPLEASE ENTER "<<arr_size<<" VALUES"<<endl;
    for(int i=0; i<arr_size; i++){
        cout<<"num["<<i<<"]:";
        cin>>num[i];
        if(i==0)
            lowest=highest=num[i];
        else{
            if(lowest>num[i]){
                lowest=num[i];
                low_location=i;
                }
            if(highest<num[i]){
                highest=num[i];
                high_location = i;
                }
        }
    }
    cout<<"The lowest number is "<<lowest<<" and its location is num["<<low_location<<"]"<<endl;
    cout<<"The highest number is "<<highest<<" and its location is num["<<high_location<<"]"<<endl;
    return 0;
}
