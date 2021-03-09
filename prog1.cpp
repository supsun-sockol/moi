# include<iostream>
#include <fstream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    ifstream fin("D:/moi/primes1.txt");
    if (!fin.is_open())
    {
        return 1;
    }
    int start;
    int finish;
    cin >> start;
    cin >> finish;
    long long q;
    string str;
    unordered_map <int, bool> v;
    for (int i = 1; i < start; i++)
    {
        fin.ignore(20, '\n');
        cout << "\b\b\b\b" << (i + 1) * 100 / start << "%";
    }
    cout << "\n";
    for (int j = start; j < finish+1; j++)
    {
        
        fin >> str;
        while (str[0] != '0'&& str[0] != '1'&& str[0] != '2'&& str[0] != '3'&& str[0] != '4'&& str[0] != '5'&& str[0] != '6'&& str[0] != '7'&& str[0] != '8'&& str[0] != '9')
        {
            str.erase(0, 1);
        }
        q = stoi(str);
        str = "D:/moi/bin/" + to_string(q);
        ofstream fout(str);
        cout << j << "\n";
        for (int i = 1; i < q; i++) {
            v[(i * i) % q] = 1;
            cout << "\b\b\b\b" << (i + 1) * 100 / q << "%";
        }
        cout << "\n";
        for (int i = 1; i < q; i++) {
            if (v[i])
            {
                fout << 1;
            }
            else fout << 0;
        }
        fout.close();
        v.clear();
    }
    
}
