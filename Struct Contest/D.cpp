#include <bits/stdc++.h>

using namespace std;

typedef struct rena
{
	string n;
	int p;
	int id;
	double h;
	bool operator < (const rena a) const
    {
        if(p != a.p)
        	return (p>a.p);
        else{
        	if(id != a.id)
        		return (id < a.id);
        	else{
        		if(h != a.h)
        			return (h < a.h);
        		else{
        			return (n<a.n);
        		}	
        	}
        }
    }
}rena;


int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n , m;
		rena aux;
		vector<rena> treno;
		cin >> n >> m;
		for (int j = 0; j < n; ++j)
		{
			int a1,a2;
			double hx;
			string nm;
			rena rd;
			cin >> nm >> a1 >> a2 >> hx;
			rd.n = nm;
			rd.p = a1;
			rd.id = a2;
			rd.h = hx;
			treno.push_back(rd);
		}
		sort(treno.begin(),treno.begin()+treno.size());
		cout << "CENARIO {" << i+1 << '}' << endl;
		for (int j = 0; j < m; ++j)
		{
			cout << j+1 << " - " << treno[j].n << endl;
		}
	}
	
	return 0;
}