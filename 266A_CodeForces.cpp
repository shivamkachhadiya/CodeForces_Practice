#include <iostream>
using namespace std;
int main()
{
    std::cout<<"Hello World";
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    string s;
    cout<<"enter s"<<endl;
    cin>>s;
    int count=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
    }
    cout<<"count is"<<count;

    return 0;
}