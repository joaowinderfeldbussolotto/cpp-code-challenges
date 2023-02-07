#include<bits/stdc++.h>
#define lli long long int
#define INF 2000000000
int tree[20000];
int n = 20000;
//calcula o valor de sum (1,k)
int sum(int k){
    int s = 0;
    while(k >= 1){
        s+= tree[k];
        k -= k&-k;
    }


    return s;
}

//incrementa o valor na posicao k por x
void add(int k, int x){
    while(k <= n){
        tree[k] += x;
        k+= k&-k;
    }
}


// Retorna soma de range 0 index
int getSum(int BITree[], int index)
{
    int sum = 0; 
 
    index = index + 1;
 
    while (index > 0) {
        // Soma elementos da Binary Indexed Tree
        sum += BITree[index];
 
        // Calcula p(k)
        index -= index & (-index);
    }
    return sum;
}
// Atualiza nó na arvore

void updateBIT(int BITree[], int n, int index, int val)
{
    index = index + 1;
 
    while (index <= n) {
        // Add valor 
        BITree[index] += val;
 
        index += index & (-index);
    }
}
 

int sum(int x, int BITTree1[], int BITTree2[])
{
    return (getSum(BITTree1, x) * x) - getSum(BITTree2, x);
}
 
void updateRange(int BITTree1[], int BITTree2[], int n,
                 int val, int l, int r)
{
d in the article
 
    // Att  BIT1
    updateBIT(BITTree1, n, l, val);
    updateBIT(BITTree1, n, r + 1, -val);
 
    // Att BIT2
    updateBIT(BITTree2, n, l, val * (l - 1));
    updateBIT(BITTree2, n, r + 1, -val * r);
}
 
int rangeSum(int l, int r, int BITTree1[], int BITTree2[])
{

    return sum(r, BITTree1, BITTree2)
           - sum(l - 1, BITTree1, BITTree2);
}
 
int* constructBITree(int n)
{
    int* BITree = new int[n + 1];
    for (int i = 1; i <= n; i++)
        BITree[i] = 0;
 
    return BITree;
}


int main(){
    int n = 5;
 
    int *BITTree1, *BITTree2;

    BITTree1 = constructBITree(n);
    BITTree2 = constructBITree(n);

    
 
}