#include <iostream>
using namespace std;
int main() {
	int a, b;
	bool end = false;
	cin >> a >> b;
	// 작은 수가 제일 많이 등장하는 약수가 된다.
	if(a != b) cout << 2;
	else{
		for (int i = 2; i * i <= a; ++i){
			if (a % i == 0) {
				cout << i;
				end = true;
				break;
			}
		}
		if(!end) cout << a;
	}
	return 0;
}
