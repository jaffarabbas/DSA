#include <iostream>
using namespace std;

// e.g
//n = 5
// 54321
// 54321
// 54321
// 54321
// 54321

int main(int argc, char const *argv[])
{
	cout << "Pattern 4" << endl;
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j = 1;
		while(j<=n){
			cout << n-j+1;
			j = j + 1;
		}
		cout<<endl;
		i = i + 1;
	}
	return 0;
}