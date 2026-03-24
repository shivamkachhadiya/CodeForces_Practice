#include <iostream>
#include <set>
using namespace std;
int main()
{

    string s;
    cin >> s;
    set<char> st;
    int count = 0;
    for (auto ch : s)
    {
        st.insert(ch);
        count = st.size();
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}