#include <iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<math.h>
#include <unordered_map>

using namespace std;
int main() {
    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);
    int n;
    cin>> n;
    int arr[n];
    long long previous=0;
    for(int i=0; i<n; i++){
        int d;
        cin>> d;
        arr[i]=d;

    }
    int fixed=25;
    int fifty=0;
    for(int i=0; i<n; i++){
        if(arr[i]==25){
            previous+=arr[i];
            
        }else if(arr[i]==50){
            previous-=25;
            fifty+=50;
            if(previous<0){
                cout<< "NO" <<endl;
                return 0;
            }
        }
        else if(arr[i]==100){
            if(fifty>0){
                fifty-=50;
                previous-=25;
            }else{
             previous-=75;
            }
        }
        if(previous<0){
            cout<< "NO" << endl;
            return 0;
         }
    }
    if(previous<0){
        cout<< "NO" <<endl;
        return 0;
    }else
    cout << "YES" <<endl;
return 0;
}
