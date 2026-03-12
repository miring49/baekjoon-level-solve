#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int cnt = 0;

void merge(int* A, int p, int q, int r, int K){
    int tmp[r];
    int i = p, j = q + 1, t = 1;
    while(i <= q and j <= r){
        if(A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }
    while(i <= q)
        tmp[t++] = A[i++];
    while(j <= r)
        tmp[t++] = A[j++];
    i = p, t = 1;
    while(i <= r){
        A[i++] = tmp[t++];
        if(++cnt == K)   cout << tmp[t - 1];
    }
}

void merge_sort(int* A, int p, int r, int K){
    int q;
    if(p < r){
        q = (p + r) / 2;
        merge_sort(A, p,q, K);
        merge_sort(A,q + 1,r, K);
        merge(A, p, q, r, K);
    }
}

int main(){
    fastio;
    int N, K; cin >> N >> K;
    int* A; A = new int[N];
    for(int i=0; i < N; i++)
        cin >> A[i];
    merge_sort(A,0,N-1,K);
    if(cnt < K) cout << -1;
    return 0;
}