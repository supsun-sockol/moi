# include<iostream>
#include<fstream>
#include <unordered_map>

int main(){
    //ifstream fin("primes50");
    int q =1009;
    std::unordered_map <int, float> v;
    for (int i=0; i<q; i++){
        v[i]=0;
        std::cout<<"\b\b\b\b"<<i*100/q<<"%";
    }
    std::cout<<"created\n000%";
    for (int i=0; i<q; i++){
        v[(i*i)%q]=1;
        std::cout<<"\b\b\b\b"<<i*100/q<<"%";
    }
    for (int i=0; i<q; i++){
        std::cout << v[i];
    }
}

