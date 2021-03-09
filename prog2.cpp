#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream fin("D:/moi/primes1.txt");
    if (!fin.is_open())
    {
        cout << "not primes\n";
        return 1;
    }
    int start;
    int finish;
    cin >> start;
    cin >> finish;
    for (int i = 1; i < start; i++)
    {
        fin.ignore(20, '\n');
        cout << "\b\b\b\b" << (i + 1) * 100 / start << "%";
    }
    cout << "\n";
    string name, str;
    char l; 
    int q, k;
    ofstream fout("D:/moi/out.txt", ios::out | ios::app);
    for (int i = start; i < finish+1; i++)
    {
        fin >> name;
        str = "D:/moi/bin/" + name;
        ifstream file(str);
        if (!file.is_open())
        {
            cout << "not files\n";
            return 1;
        }
        k = 0;
        q = (stoi(name) - 1) / 4;
        str = "";
        for (int j = 0; j < q; j++)
        {
            file >> l; str += l;
        }
        for (int j = 0; j < q; j++)
        {
            if (str[j]=='1')
            {
                k += 1;
            }
        }
        cout << "\b\b\b\b" << (i-start) * 100 / (finish-start) << "%";
        fout << name << " - " << 2*k-q << "\n";
    }
    
}
