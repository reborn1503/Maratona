#include <bits/stdc++.h>
#define mk make_pair
using namespace std;
typedef pair<string,string> ss;
typedef vector<ss> vss;


int main(){
	vss aux;
	aux.push_back(mk("brasil","Feliz Natal!"));
	aux.push_back(mk("alemanha","Frohliche Weihnachten!"));
	aux.push_back(mk("austria","Frohe Weihnacht!"));
	aux.push_back(mk("coreia","Chuk Sung Tan!"));
	aux.push_back(mk("espanha","Feliz Navidad!"));
	aux.push_back(mk("grecia","Kala Christougena!"));
	aux.push_back(mk("estados-unidos","Merry Christmas!"));
	aux.push_back(mk("inglaterra","Merry Christmas!"));
	aux.push_back(mk("australia","Merry Christmas!"));
	aux.push_back(mk("portugal","Feliz Natal!"));
	aux.push_back(mk("suecia","God Jul!"));
	aux.push_back(mk("turquia","Mutlu Noeller"));
	aux.push_back(mk("argentina","Feliz Navidad!"));
	aux.push_back(mk("chile","Feliz Navidad!"));
	aux.push_back(mk("mexico","Feliz Navidad!"));
	aux.push_back(mk("antardida","Merry Christmas!"));
	aux.push_back(mk("canada","Merry Christmas!"));
	aux.push_back(mk("irlanda","Nollaig Shona Dhuit!"));
	aux.push_back(mk("belgica","Zalig Kerstfeest!"));
	aux.push_back(mk("italia","Buon Natale!"));
	aux.push_back(mk("libia","Buon Natale!"));
	aux.push_back(mk("siria","Milad Mubarak!"));
	aux.push_back(mk("marrocos","Milad Mubarak!"));
	aux.push_back(mk("japao","Merii Kurisumasu!"));
	string nome;
	while(cin >> nome){
		for (int i = 0; i < aux.size(); ++i)
		{
			if(nome==aux[i].first){
				cout << aux[i].second << endl;
				break;
			}else{
				if(i == aux.size()-1)
					cout << "--- NOT FOUND ---" << endl;
			}
		}
	}




	return 0;
}