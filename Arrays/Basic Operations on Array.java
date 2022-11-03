#include<iostream>
using namespace  std;

int main()
{
    int input=0;
    cout<<"How many elements do you want to add?";
    cin>>input;
    const int val=input;
    double foo[val];
    //operations to be handled by this code
    enum arrayoperations{traverse=1,insert,search, deleteElement};

    do{
        int options=0;
        cout<<"Choose any of the following operations:";
        cout<<"1. Traverse Array";
        cout<<"2. Insert at a location";
        cout<<"3. Search element in array";
        cout<<"4. Delete Element from array";
        cin>>options;

        switch(options)
        {
            case traverse:
                break;
            case insert:
                break;
            case search:
                break;
            case deleteElement:
                break;
            default:
                cout<<"Invalid operation";
        }

        //add logic to exit or continue the loop
    }while(1);

    
    //logic for input
    for(int counter=0; counter<val; counter++)
    {
        cout<<"Enter the value for index "<<counter<<" : ";
        cin>>foo[counter];
    }
    //logic for print/traverse and array 
    for(int counter=0; counter<val; counter++)
    {
        cout<<"value for index "<<foo[counter]<<endl;
    }
    cout<<"Enter the value to be deleted:";


    return 0;
}
