#include <iostream>
#include <algorithm>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;

void iscrtaj(int RedakA, int StupacA, int RedakB, int StupacB)
{
	int trenutni_redak = RedakA;
	int trenutni_stupac = StupacA;

	while (trenutni_redak != RedakB or trenutni_stupac != StupacB)
	{

		system("cls");
		for (int i = 1; i <= 20; i++) {
			for (int j = 1; j <= 40; j++) {
				if (i == RedakA and j == StupacA)
				{
					cout << "A";
				}
				else if (i == RedakB and j == StupacB)
				{
					cout << "B";
				}
				if (i == trenutni_redak and j == trenutni_stupac) {
					cout << "x ";
				}
				else {
					cout << "-";
				}
			}
			cout << endl;
		}
		cout << endl;

		if (trenutni_redak < RedakB)
		{
			trenutni_redak++;
		}
		else if (trenutni_redak > RedakB)
			trenutni_redak--;
		if (trenutni_stupac < StupacB)
		{
			trenutni_stupac++;
		}
		else if (trenutni_stupac > StupacB)
			trenutni_stupac--;

		this_thread::sleep_for(milliseconds(100));

	}
	system("cls");
	for (int i = 1; i <= 20; i++) {
		for (int j = 1; j <= 40; j++) {
			if (i == RedakB and j == StupacB)
			{
				cout << "x";
			}
			else if (i == RedakA and j == StupacA)
			{
				cout << "A";
			}
			else {
				cout << "-";
			}
		}
		cout << endl;
	}
}

int main()
{
	int RedakA, StupacA, RedakB, StupacB;

	cout << "Unesite redak A: " << endl;
	cin >> RedakA;

	cout << "Unesite stupac A:" << endl;
	cin >> StupacA;

	cout << "Unsite redak B: " << endl;
	cin >> RedakB;

	cout << "Unesite stupac B:" << endl;
	cin >> StupacB;

	iscrtaj(RedakA, StupacA, RedakB, StupacB);

	return 0;
}