#include <fstream>

int main()
{

	using namespace std;

	ifstream inFile;
	ofstream outFile;
	inFile.open("test.txt");
	outFile.open("zadanie5a.txt");

	string slowo;
	int tab[12] = {};

	while (inFile >> slowo)
	{
		int dlugoscSlowa = slowo.size();
		switch (dlugoscSlowa)
		{
		case 1:
			tab[0]++;
			break;
		case 2:
			tab[1]++;
			break;
		case 3:
			tab[2]++;
			break;
		case 4:
			tab[3]++;
			break;
		case 5:
			tab[4]++;
			break;
		case 6:
			tab[5]++;
			break;
		case 7:
			tab[6]++;
			break;
		case 8:
			tab[7]++;
			break;
		case 9:
			tab[8]++;
			break;
		case 10:
			tab[9]++;
			break;
		case 11:
			tab[10]++;
			break;
		case 12:
			tab[11]++;
			break;
		}
	}
	for (int i = 0; i < 12; i++)
	{
		outFile << i + 1 << " " << tab[i] << endl;
	}
}