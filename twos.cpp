#include <iostream>
using namespace std;

#define CNT (2 << 7)

int main(int argc, char **argv) {
	int count[CNT];
	int size = CNT;

	count[0] = 0;
	count[1] = 0;
	count[2] = 1;
	count[3] = 0;
	cout << "0 0" << endl
		<< "1 0" << endl
		<< "2 1" << endl
		<< "3 0" << endl;

	for(int i = 4; i < size; ++i) {
		count[i] = 1 + count[i / 2];
		count[i + 1] = 0;
		cout << i << " " << count[i] << endl
			<< (i + 1) << " " << count[i + 1] << endl;
		i++;
	}

	return 0;
}
