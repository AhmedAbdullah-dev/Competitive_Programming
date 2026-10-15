#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n ;
    cin >> n;

    vector<double> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double sum = 0 ;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double avg = sum / n;
    
    double closest = arr[0];
    double bestdiff = abs(arr[0] - avg);

    for (int i = 0; i < n; i++)
    {
        double currentdiff = abs(arr[i] - avg);

        if (currentdiff < bestdiff)
        {
            bestdiff = currentdiff;
            closest = arr[i];
        }
        
    }

    cout << closest << endl;
    
    
    

    
    return 0 ;
}

