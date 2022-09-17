#include <iostream>
using namespace std;

// e.g
//n = 5
// 1
// 21
// 321
// 4321
// 54321

int main(int argc, char const *argv[])
{
	cout << "Pattern 11" << endl;
	int n;
	cin >> n;
	int i = 1;
	char ch;
	while(i<=n){
		int j = 1;
		while(j<=n){
			ch = 64+i;
			cout << ch;
			j = j + 1;
		}
		cout<<endl;
		i = i + 1;
	}
	return 0;
}

