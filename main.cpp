# include<iostream>
#include <fstream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    ifstream fin("primes1.txt");
    if (!fin.is_open())
    {
        return 1;
    }
    const int start = 1;
    int q;
    string str;
    unordered_map <int, bool> v;
    for (int j = start; j < 10000; j++)
    {
        fin >> q;
        str = "bin/" + to_string(q);
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
