#include <iostream>
#include <stdlib.h>
using namespace std;

long myList[5];
void input(){
    cout<<" INPUT 5 NUMBERs:"<<endl;
    for (int i=0; i<5; i++){
        cout<<" Enter a number:";
        cin >> myList[i];
    }
    cout<<"\n\n Input Succesfully.";
}

long findLowest(long arr[]){
    long highest=0;
    for (int i=0;i<5;i++){
		if(highest==0 && i==0){
			highest= arr[i];
			continue;}
		if(highest>arr[i])
			highest = arr[i];
	}
	return highest;
	}

long findHighest(long arr[]){
    long lowest = 0;
    for (int i=0;i<5;i++){
		if(lowest<arr[i])
			lowest = arr[i];
	}
	return lowest;
}


void evenOdd(){

    cout<< "\n NUMBERS\tRESULTS"<<endl;
    for (int i=0;i<5; i++){
        if(myList[i]%2 == 0)
            cout<<" "<<myList[i]<<"\t\tEVEN\n";
        else
            cout<<" "<<myList[i]<<"\t\tODD\n";
    }
}

void numberSigns(){
        cout<< "\n NUMBERS\tSIGNS"<<endl;
        for (int i=0;i<5; i++){
            if(myList[i]>0)
                cout<<" "<<myList[i]<<"\t\tPOSSITIVE\n";
            else if(myList[i]<0)
                cout<<" "<<myList[i]<<"\t\tNEGATIVE\n";
            else
                cout<<" "<<myList[i]<<"\t\tORIGIN\n";
    }
}

int main()
{

    int command=0;

    while (true){
    cout << "============================" << endl;
    cout << "    ONE DIMENSIONAL ARRAY  " << endl;
    cout << "============================" << endl;
    cout << "       ***COMMANDS*** " << endl;
    cout << " [1] INPUT 5 NUMBERS " << endl;
    cout << " [2] FIND THE HIGHEST VALUE  " << endl;
    cout << " [3] FIND THE LOWEST VALUE  " << endl;
    cout << " [4] IDENTIFY ODD AND EVEN  " << endl;
    cout << " [5] POSITIVES AND NEGATIVES" << endl;
    cout << " [0] EXIT  " << endl;
    cout << "============================" << endl;
    cout << " CHOOSE A COMMAND:";
    cin >>command;

    switch(command){
    case 1:
        input();
        break;
    case 2:
        cout<<" THE HIGHEST VALUE IS "<<findHighest(myList)<<endl;
        break;
    case 3:
        cout<<" THE LOWEST VALUE IS "<<findLowest(myList)<<endl;
        break;
    case 4:
        evenOdd();
        break;
    case 5:
        numberSigns();
        break;
    case 0:
        return false;
        break;
    default:
        cout<<" INVALID INPUT! ";
    }
     system("pause");
     system("CLS");
    }
    return 0;
}
