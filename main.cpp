#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char str[30];
    int i = 0;
    int pos;
    string in;
    string tmp;
    cout << "Enter your aboba:"<<endl;
    cin >> in;
    ifstream file;
    file.open("aboba.txt");
    while (!file.eof()) {
        file.getline(str, 30);
        tmp = str;
        pos = tmp.find(in);
        i++;
        if (pos != -1) {
            cout << i << endl;
        }
    }
    file.close();
    return 0;
}

