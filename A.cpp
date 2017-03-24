#include <bits/stdc++.h>

using namespace std;

int main(){

	int x;
	int cont = 0;
	long nums;
	while(cin>>x){
		nums = 1;
		cont++;
		//cout << endl;
		for (int i = 1; i <= x ; ++i)
		{
			//cout << nums << endl;
			nums += i;
			//cout << nums << endl;
			
		}
		//cout << endl;
		cout << "Caso " << cont << ": " << nums << " numero";
		if(nums == 1) cout << endl;
		else cout << "s" << endl;
		cout << '0';
		for (int i = 1; i <= x; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout  << ' ' << i ;
			}
		}
		cout << endl << endl;
	}

	return 0;
}