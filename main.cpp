#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, sum;
	cout << "First two integers: " << endl;
	cin >> n1 >> n2;
	cout << "How many times will integers be added?" << endl;
	cin >> N;
	cout << n1 << " " << n2 << " ";
	for (int i=0; i<N-2; i++){
		sum = n1 + n2;
		cout << sum << " ";
		n1 = n2;
		n2 = sum;
	}

	cout << endl;
	return 0;
}
