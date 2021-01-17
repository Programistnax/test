#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if (a>20){
        cout << "Vasya wins";
    }else if (20<b){
        cout << "Petya wins";
    }else if (((a+b)/5)%2==0){
        cout << "Vasya serves";
    }else{
        cout << "Petya serves";
    }
    return 0;
}
