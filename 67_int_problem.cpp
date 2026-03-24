#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    while (t--) {
        int x;
        cin>>x;

        int y;
        if (x<=66) {
            y=x+1;
        }else {
            y=67;
        }
        cout<<y<<endl;
    }
    return 0;

}