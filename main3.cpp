#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0;

    cout<<"Numero de cinco digitos: "<<endl;
    cin>>x;

    while(x!=0){
        y=x%10;
        cout<<y<<endl;
        x/=10;
    }


    return 0;
}

