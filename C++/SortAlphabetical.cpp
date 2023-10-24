#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;
int main()
{
    string name;
    cin >> name;
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    sort(name.begin(), name.end());
    cout << name;
}
