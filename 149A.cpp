#include<iostream>
#include<vector>
#include<algorithm>

#define MAX 101

using namespace std;


int main() {
	
	int k;
	cin>>k;

	vector<int> a (12);
	for(int i = 0; i < 12; i++)
		cin>>a[i];
	
	// Base case
	if ( k == 0){
		cout<<"0";
		return 0;
	}

	// Sort all the months 
	sort(a.begin(), a.end(), greater<int>());
	
	int sum = 0;
	for(int i = 0; i < 12; i++){
		sum += a[i];
		if(sum >= k){
			cout<<i+1;
			return 0;
		
		}
	}
	cout<<"-1";
	return 0;
}


