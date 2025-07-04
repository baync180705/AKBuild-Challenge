#include <iostream>
#include <chrono>

using namespace std;

int main() {
    int num;
    cin>>num;

    int cnt=1;
    auto start = chrono::high_resolution_clock::now();
    unsigned long long curr=1;
    unsigned long long res;

    while(cnt<=num){
        unsigned long long tmp = curr;
        while(tmp%2==0)tmp/=2;
        while(tmp%3==0)tmp/=3;
        while(tmp%5==0)tmp/=5;
        if(tmp==1){
            res=curr;
            cnt++;
        }
        curr++;
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout<<"Result: "<<res<<endl;
    cout<<"Execution time: "<<duration.count()<<" microseconds"<<endl;

}

