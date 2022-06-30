#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int w; cin>>w;
    if (w%2==0 && w!=2 && w!=0){
        cout<<"YES";
        return 0;
    }
    else{
        int n=w%2 , i=w-n;
        while (n--){
            i++;
            if (i%2==0 && n&2==0){
                cout<<"YES";
                return 0;
            }
        }
        n=w%2;
        i=w-n;
        while (i--){
            n++;
            if (i%2==0 && n&2==0){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<< "NO";
    return 0;
}
