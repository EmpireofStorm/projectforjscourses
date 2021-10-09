#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a, i=0, b;
    cin >> a;
    vector<int> z(a);
    while (i<a){
        cin >> b;
        z.push_back(b);
    }
    i=a-1;
    while (i!=0){
        cout << z[i] << " ";
        i=i-1;
    }
    
}
