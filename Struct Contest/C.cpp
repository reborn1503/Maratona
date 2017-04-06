#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1 , s2;
	set<string> ref1;
	set<string> ref2;
	priority_queue< string, vector<string>, greater<string> > v1;
	priority_queue< string, vector<string>, greater<string> > v2;
	cin >> s1 >> s2;
	string bn = s1;
	while(s1!="FIM"){	
		if(s2 == "YES")
			ref1.insert(s1);
		else
			ref2.insert(s1);
		if((s1.size() > bn.size())&&(s2 == "YES"))
			bn = s1;

		cin >> s1 >> s2;
	}
	for (set<string>::iterator it=ref1.begin(); it!=ref1.end(); ++it)
	{
		v1.push(*it);
	}
	for (set<string>::iterator it=ref2.begin(); it!=ref2.end(); ++it)
	{
		v2.push(*it);
	}
	while(!v1.empty()){
		cout << v1.top() << endl;
		v1.pop();
	}
	while(!v2.empty()){
		cout << v2.top() << endl;
		v2.pop();
	}
	cout << endl << "Amigo do Habay:" << endl << bn << endl;
	return 0;
}