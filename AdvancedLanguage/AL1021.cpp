#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int AL1021(void)
{
	char speak;
	for (speak = 'A'; speak <= 'D'; speak++)
	{
		if ((speak != 'A') + (speak == 'C') + (speak == 'D') + (speak != 'D') == 3)
			cout << speak;
	}
	return 0;
}