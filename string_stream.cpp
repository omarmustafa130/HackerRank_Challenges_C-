/*
stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
*/



#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector <int> v1;
    stringstream ss(str);
    char ch;
    int a;
    int i = 0;
    for (int i =0; i<str.size(); i++) //"23,4,
    {

        if (str[i] == ',')
            continue;


        ss >> a >> ch;//23,4,56    //23,4

        v1.push_back(a);
        if (a<0)
        {
            a*=-1;
            i++;
        }

        while(a>0)
        {
            a/=10;
            i++;
        }

    }
    return v1;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
