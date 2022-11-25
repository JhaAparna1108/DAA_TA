#include <bits/stdc++.h>
using namespace std;
const int V=5;

bool isCycle(int curr, int parent, int arr[][V], vector<int>& order, int visited[V]) {
    visited[curr] = 1;
    order.push_back(curr);
    for(int i=0; i<V; ++i) {
        //if adjacent vertex and not visited
        if(arr[curr][i] && !visited[i]) {
            if(isCycle(i, curr, arr, order, visited)) {
                return true;
            }
            else return false;
        }
    }
    for(int i=0; i<V; ++i) {
        //if adjacent vertex and visited and is not a parent vertex and not a current vertex
        if(arr[curr][i] && visited[i] && i!=parent && i!=curr) {
            order.push_back(i);
            return true;
        }
    }
    return false;
}

// bool cycle(int arr[][V], vector<int>& order) {
//     for(int i=0; i<V; ++i) {
//         int visited[V] = {0};
//         order.clear();
//         order.assign(order.size(), -1);
//         if(isCycle(i, -1, arr, order, visited))
//             return true;
//     }
//     return false;
// }

int main() {

    int arr[][V] = { {0, 1, 0, 0, 0},
                     {1, 0, 1, 0, 1}, 
                     {0, 1, 0, 1, 0}, 
                     {0, 0, 1, 0, 1}, 
                     {0, 1, 0, 1, 0} };

    vector<int> order(V+1);
    for(int a=0;a<V+1;a++){
        order[a]=-1;
    }
    
    // if(cycle(arr, order)==true){
        // if(order[0]==order[V]){
        //     cout<<"Complete graph is cyclic."<<endl;
        // }
        // else{
        //     cout<<"Some Part of graph is cyclic."<<endl;
        // }
        // int index;
        // for(int i=0; i<V; ++i) {
        //     if(order[i] == order[V]) {
        //         index=i; 
        //         break;
        //     }
        // }
        // cout<<"The Cyclic path is:"<<endl;
        // for(int i=index; i<V+1; ++i){
        //     cout<<" -> "<<order[i];
        // }
    // }
    // else{
    //     cout<<"No Graph Contains No cycle."<<endl;
    // }

    for(int i=0; i<V; ++i) {
        int visited[V] = {0};
        order.clear();
        for(int a=0;a<V+1;a++){
            order[a]=-1;
        }
        if(isCycle(i, -1, arr, order, visited)){
            if(order[0]==order[V]){
            cout<<"Complete graph is cyclic."<<endl;
        }
        else{
            cout<<"Some Part of graph is cyclic."<<endl;
        }
        int index;
        for(int i=0; i<V; ++i) {
            if(order[i] == order[V]) {
                index=i; 
                break;
            }
        }
        cout<<"The Cyclic path is:"<<endl;
        for(int i=index; i<V+1; ++i){
            cout<<" -> "<<order[i];
        }
        return 0;
        }
    }
    
    cout<<"No Graph Contains No cycle."<<endl;

    return 0;
}