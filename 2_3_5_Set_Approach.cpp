#include <bits/stdc++.h>
using namespace std;

int main () {
    int idx;
    cin>>idx;

    auto start = chrono::high_resolution_clock::now();

    unsigned long int num = 1;
    int cnt=1;
    int m2=2, m3=3, m5=5;

    set<unsigned long int> pool;
    
    while(cnt<idx){
        pool.insert(num*m2);
        pool.insert(num*m3);
        pool.insert(num*m5);
        auto it = pool.begin();
        num = *it;
        pool.erase(it);
        cnt++;
    }

    auto stop =chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::microseconds>(stop - start);
    cout<<"Result: "<<num<<endl;
    cout<<"Execution time: "<<duration.count()<<" microseconds"<<endl;
}
