#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N , P , M ;
    double  R;
 
 
    cin >> N;
    for(int i = 0 ;  i < N ; i++){
        R=0;
        cin >> P;
        vector<string> itens;
        vector<double> precos;
        for(int j = 0; j < P ;  j++){
            string it;
            double pr;
            cin >> it >> pr;
            itens.push_back(it);
            precos.push_back(pr);
        }
        cin >> M;
        vector<string> whish;
        vector<int> desejo;
        for(int j = 0; j < M; j++){
            string w;
            int d;
            cin >> w >> d;
            whish.push_back(w);
            desejo.push_back(d);
            for(int k = 0 ; k < P ; k++){
                if(whish[j]==itens[k]){
                    R += precos[k]*desejo[j];
                }
            }
        }
    cout.precision(2);
        cout << "R$ "<< fixed << R << endl;
    }
 
    return 0;
}