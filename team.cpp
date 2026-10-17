#include<iostream>
using namespace std;

int main (){
    int n ;
    cin >> n;

    int solved_count = 0;

    while (n--)
    {
        int a , b , c ;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            solved_count ++;
        }
        
    }
    cout << solved_count << endl ;
    return 0;
}