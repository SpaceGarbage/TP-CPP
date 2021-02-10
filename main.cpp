#include <iostream>
#include "zombie.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


int main()
{
    srand(time(NULL));

	zombie z1;
	z1.ShowInfos();

	z1.setNom("Aled");
	z1.setPv(100);
	z1.setForce(10);
	z1.ShowInfos();
	cout << endl;

    return 0;
}
