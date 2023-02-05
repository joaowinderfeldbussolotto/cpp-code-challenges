#include <bits/stdc++.h>

using namespace std;
// https://www.youtube.com/watch?v=4HKXdh_LHps&ab_channel=ARSLONGAVITABREVIS



/*
vector<int> a = {0, street};   // [0, 8] --> [0, 8, 3] --> [0, 3, 8] --> max dif entre subsequentes
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        a.push_back(val);
        sort(a.begin(), a.end());
        int ans = 0;
        for(int i = 1; i < a.size(); i++){
            ans = max(ans,a[i] - a[i-1]);
        }
        cout << ans << " ";
    }
*/

int main(){
    int lights, len_street;
    cin >> len_street >> lights;
    set <int> pos; // Posicao dos semaforos
    multiset<int> lenghts; // Lista com o comprimento dos trechos sem semaforo
    pos.insert(0);
    pos.insert(len_street);
    lenghts.insert(len_street);
    for(int i = 0; i < lights; i++){
        int new_light;
        cin >> new_light;
        pos.insert(new_light);
        
        auto iter = pos.find(new_light);
        int prev = *std::prev(iter);
        int next = *std::next(iter);

        lenghts.erase(lenghts.find(next - prev)); // Tem um semaforo no meio, apaga prev - next (um!) 
        //Adicionando novos comprimentos.
        lenghts.insert(next-new_light);
        lenghts.insert(new_light - prev);
        //Printando o máximo do conjunto
        cout << *lenghts.rbegin() << " ";

    }

    
    return 0;
}