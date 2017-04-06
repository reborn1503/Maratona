#include <bits/stdc++.h>

using namespace std;
const int MAX = 3000;

class cSort
{
public:
    void sort( int* arr, int len )
    {
	int mi, mx, z = 0; findMinMax( arr, len, mi, mx );
	int nlen = ( mx - mi ) + 1; int* temp = new int[nlen];
	memset( temp, 0, nlen * sizeof( int ) );
 
	for( int i = 0; i < len; i++ ) temp[arr[i] - mi]++;
 
	for( int i = mi; i <= mx; i++ )
	{
	    while( temp[i - mi] )
	    {
		arr[z++] = i;
		temp[i - mi]--;
	    }
	}
 
	delete [] temp;
    }
 
private:
    void findMinMax( int* arr, int len, int& mi, int& mx )
    {
	mi = INT_MAX; mx = 0;
	for( int i = 0; i < len; i++ )
	{
	    if( arr[i] > mx ) mx = arr[i];
	    if( arr[i] < mi ) mi = arr[i];
	}
    }
};
int main(){
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
 		vector<int> v;
 		int n;
 		scanf("%d",&n);
 		for (int j = 0; j < n; ++j)
 		{
 			int ax;
 			scanf("%d",&ax);
 			v.push_back(ax);
 		}
 		cSort s; s.sort( &v[0], v.size() );
 		printf("%d",v[0] );
 		for (int j = 1; j < v.size(); ++j)
 		{
 			printf(" %d",v[j] );
 		}
 		cout << endl;
 		
	}
	
	return 0;
}