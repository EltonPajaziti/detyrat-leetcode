/*
	Detyra 1
	Te krijohet programi i cili kalkulon noten mesatare
	te dy studenteve per 4 lende.
*/
#include <iostream>

using namespace std;

int main() {

	const int nrStudenteve = 2, nrNotave = 4;

	int ditari[nrStudenteve][nrNotave] = {};
	int shuma = 0;

	cout << "Leximi i notave permes tastieres: " << endl;

	for (int studenti = 0; studenti < nrStudenteve; studenti++)
	{
		cout << "Shenoni notat per studentin " << studenti + 1 << endl;
		for (int nota = 0; nota < nrNotave; nota++)
		{
			cout << "Nota " << nota + 1 << " per studentin " << studenti + 1 << ": ";
			cin >> ditari[studenti][nota];
		}
	}

	for (int studenti = 0; studenti < nrStudenteve; studenti++)
	{
		cout << "Notat e studentit " << studenti + 1 << ": ";
		shuma = 0;
		for (int nota = 0; nota < nrNotave; nota++)
		{
			cout << ditari[studenti][nota] << " ";
			shuma += ditari[studenti][nota];
		}
		
		cout << endl;
		cout << "Nota mesatare per studentin " << studenti + 1 << " eshte: " << shuma * 1.0 / nrNotave << endl;
	}

	return 0;
}

/*
	Detyra 2
	Te deklarohet nje matrice katrore 4x4 dhe te inicializohet 
	me vlera permes tastieres. 
	Te gjendet shuma e numrave cift nen diagonale
	Te numerohen numrat negativ ne diagonale
	Te numerohen numrat tek mbi diagonale
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int rendi = 4;

	int matrica[rendi][rendi] = {};
	int shumaCiftNenDiagonale = 0, nrNegativNeDiagonale = 0, nrTekMbiDiagonale = 0;

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			cout << "Matrica[" << i << "][" << j << "]: ";
			cin >> matrica[i][j];
		}
	}

	for (int i = 0; i < rendi; i++)
	{
		cout << "Rreshti " << i + 1 << ": ";
		for (int j = 0; j < rendi; j++)
		{
			cout << setw(3) << matrica[i][j] << " ";
			// nen diagonale
			if (i > j && matrica[i][j] % 2 == 0) {
				shumaCiftNenDiagonale += matrica[i][j];
			}
			else if (i == j && matrica[i][j] < 0) { // ne diagonale
				nrNegativNeDiagonale += 1;
			}
			else if (i < j && matrica[i][j] % 2 != 0) {
				nrTekMbiDiagonale++;
			}
		}

		cout << endl;
	}

	cout << "Shuma e numrave cift nen diagonale: " << shumaCiftNenDiagonale << endl;
	cout << "Numrat negativ ne diagonale: " << nrNegativNeDiagonale << endl;
	cout << "Numrat tek mbi diagonale: " << nrTekMbiDiagonale << endl;

	return 0;
}

/*
	Detyra 3
	Te shkruhet kodi i cili shton anetaret sipas kushteve ne vijim:
		a) Vlera e elementeve brenda dy rreshtave te pare dhe te fundit
		si dhe dy kolonave te para dhe te fundit te jete 1
		b) Vlerat tjera te jene 0
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int rendi = 12;

	int matrica[rendi][rendi] = {};

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			if (i < 2 || j < 2) {
				matrica[i][j] = 1;
			}
			else if(j> rendi - 3 || i > rendi -3) {
				matrica[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			cout << setw(2) << matrica[i][j];
		}
		cout << endl;
	}

	return 0;
}

/*
	Detyra 4
	Te shkruhet kodi i cili krijon matrices sipas formatit ne vijim:
		5 0 0 5
		0 0 0 0
		0 0 0 0
		5 0 0 5
	Kodi i shkruar te vleje per cfare do matrice katrore
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int rendi = 8;

	int matrica[rendi][rendi] = {};

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			if ((i == 0 && j == 0) || (i == rendi - 1 && j == 0)
				|| (j == rendi - 1 && i == 0) || (i == rendi - 1 && j == rendi - 1)) {
				matrica[i][j] = 5;
			}
		}
	}

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			cout << setw(2) << matrica[i][j];
		}
		cout << endl;
	}

	return 0;
}

/*
	Detyra 5
	Te krijohet matrica si ne vijim e cila vlen per cfare do 
	matrice katrore.
	0     0     2     0
    0     3     0     5
    2     0     4     0
    0     5     0     7
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int rendi = 5;

	int matrica[rendi][rendi] = {};

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			if (i % 2 == 0 && j % 2 == 0) {
				matrica[i][j] = i + j;
			} else if (i % 2 != 0 && j % 2 != 0) {
				matrica[i][j] = i + j + 1;
			}
		}
	}

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			cout << setw(2) << matrica[i][j];
		}
		cout << endl;
	}

	return 0;
}