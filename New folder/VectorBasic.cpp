#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
typedef pair<int,int> pii;


void print(vector<int> a){
    for(auto i:a) cout<<i<<" ";
    cout<<endl;
}
void print(vector<pii> a){
    for(auto i:a) cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;
}
int main() {
    cout << "Try programiz.pro"<<endl;
    vector<int> v={1,5,7,9};
    sort(v.begin(),v.end(),[](int a, int b){
        return a>b;
    });
    print(v);
    
    vector<pii> k={{1,5 },{11 ,1 },{2 ,8 },{4 ,2 },{6 ,3 },
                {9 ,1 },{11 ,3 },{19 ,1 },{2 ,5 },{9 ,2 },
                {1,205},{302 ,0 },{9 ,9 },{11 ,13 },{5 ,5 }
    };
    auto cmp = [](pii a, pii b){
        if(a.first == b.first) return a.second >b.second;
        return a.first < b.first;
    };
    priority_queue<pii, vector<pii>, decltype(cmp)> pq(cmp);
    for(auto i:k){
        pq.push(i);
    }
    sort(k.begin(),k.end(),[](pii a, pii b){
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    });
    print(k);
    
    vector<pii> fonal;
    while(!pq.empty()){
        pii tp = pq.top();
        pq.pop();
        fonal.push_back(tp);
    }
    print(fonal);
    

    return 0;
}