#include <bits/stdc++.h>

using namespace std;
const int MAX = 3000;


int main(){
	int n;
	while(scanf("%d" , &n)!=EOF){
		int in , f , p;
		vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d %d" , &in ,&f);
			for (int j = in ; j <=f; ++j)
			{
				v.push_back(j);
			}
		}
		sort(v.begin(), v.begin()+v.size());
		scanf("%d" , &p);
		printf("%d ", p );
		int flag = 0; 
		int s =-1, e=0;
		for (int i = 0; i < v.size(); ++i)
		{
			//cout << s<< ' ' << e << ' ';
			if(v[i]==p && flag == 0){
				flag++;
				s = i;
			}
			if(v[i]!=p && flag == 1){
				e = i-1;
				flag--;
			}
		}//cout << endl;
		if(s!=0&&e==0) e = v.size()-1;
		if(s!=-1) printf("found from %d to %d\n",s,e);
		else printf("not found\n");
	}
	return 0;
}