#include <iostream>
#include <cmath>

using namespace std;
int AL1024(void)
{
	int f[40];
	f[1] = f[0] = 1;
	for (int i = 2; i < 40; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	int i;
	i = 0;
	int count = 0;
	while (i < 40) {
		cout << f[i] << " ";
			count += 1;
		if (count % 4 == 0)
			cout << endl;

		i++;
	}

	return 0;
}

