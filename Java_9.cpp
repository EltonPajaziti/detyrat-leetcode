/*
	Detyra 1
	Kerkimi i nje vlere brenda vargut
*/
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 7;
	int A[gjatesiaVargut] = {};

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}

	cout << "Vargu A = ["; 
	int i = 0;
	while (i < gjatesiaVargut) {
		if (i < gjatesiaVargut - 1) {
			cout << A[i] << ", ";
		}
		else {
			cout << A[i] << "]" << endl;
		}

		i++;
	}

	int numri;
	bool gjendet = false;
	cout << "Shenoni nje numer: ";
	cin >> numri;

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Numri " << numri << " po krahasohet me numrin " << A[i] << endl;
		if (A[i] == numri) {
			cout << "Numri i dhene gjendet brenda vargut ne poziten " << i << endl;
			gjendet = true;
			break;
		}
	}

	if (!gjendet) {
		cout << "Numri i dhene nuk gjendet brenda vargut" << endl;
	}

	return 0;
}

/*
	Detyra 1.1
*/
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 7;
	int A[gjatesiaVargut] = {};

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}

	cout << "Vargu A = [";
	int i = 0;
	while (i < gjatesiaVargut) {
		if (i < gjatesiaVargut - 1) {
			cout << A[i] << ", ";
		}
		else {
			cout << A[i] << "]" << endl;
		}

		i++;
	}

	int numri;
	cout << "Shenoni nje numer: ";
	cin >> numri;

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Numri " << numri << " po krahasohet me numrin " << A[i] << endl;
		if (A[i] == numri) {
			cout << "Numri i dhene gjendet brenda vargut ne poziten " << i << endl;
			return 0;
		}
	}

	cout << "Numri i dhene nuk gjendet brenda vargut" << endl;

	return 0;
}
/*
	Detyra 2 - Sortimi i vargut
*/

#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 7;
	int A[gjatesiaVargut] = {};

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}

	cout << "Vargu A = ["; 
	int i = 0;
	while (i < gjatesiaVargut) {
		if (i < gjatesiaVargut - 1) {
			cout << A[i] << ", ";
		}
		else {
			cout << A[i] << "]" << endl;
		}

		i++;
	}

	/*
		[4, 1, 2, 6, -3]

		1. a = 4 => 1, 2, 6, -3
		   
		   1 < 4 => TRUE => [1, 4, 2, 6, -3]
		   a = 1 
		   2 < 1 => FALSE
		   6 < 1 => FALSE
		   -3 < 1 => TRUE => [-3, 4, 2, 6, 1]
		2. a = 4 => 2, 6, 1
		   2 < 4 => TRUE => [-3, 2, 4, 6, 1]
		   a = 2
		   6 < 2 => FALSE
		   1 < 2 => TRUE => [-3, 1, 4, 6, 2]
		3. a = 4 => 6, 2
		   6 < 4 => FALSE
		   2 < 4 => TRUE => [-3, 1, 2, 6, 4]
		4. a = 6 => 4
		   4 < 6 => TRUE => [-3, 1, 2, 4, 6]
	*/
	
	// i = 0, j = 1, 2, 3, 4
	// i = 1, j = 2, 3, 4
	// i = 2, j = 3, 4
	// i = 3, j = 4
	int temp;
	for (int i = 0; i < gjatesiaVargut - 1; i++)
	{
		for (int j = i + 1; j < gjatesiaVargut; j++)
		{
			if (A[j] < A[i]) {
				cout << "Shkembehen vendet mes " << A[i] << " dhe " << A[j] << endl;
				temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}

	cout << "Vargu i sortuar A = [";
	int k = 0;
	while (k < gjatesiaVargut) {
		if (k < gjatesiaVargut - 1) {
			cout << A[k] << ", ";
		}
		else {
			cout << A[k] << "]" << endl;
		}

		k++;
	}

	return 0;
}

/*
	Detyra 3 
	Deklarimi, inicializimi dhe qasja ne elemente te matrices
*/	
#include <iostream>

using namespace std;

int main() {

	int matrica[3][5] = {
		{4, 11, 7, -2, 5},
		{9, 24, 1, 7, 3},
		{3, 12, 54, -12, 5}
	};


	cout << matrica[1][1] << endl;
	cout << matrica[2][4] << endl;

	cout << "Matrica[0][1]: " << matrica[0][1] << endl;
	cout << "Matrica[2][3]: " << matrica[2][3] << endl;
	matrica[0][1] = matrica[2][3];
	cout << "Matrica[0][1]: " << matrica[0][1] << endl;
	cout << "Matrica[2][3]: " << matrica[2][3] << endl;

	return 0;
}	

/*
	Detyra 4
	Printimi i elementeve te matrices permes unazes for dhe while
*/

#include <iostream>

using namespace std;

int main() {

	int matrica[3][5] = {
		{4, 11, 7, -2, 5},
		{9, 24, 1, 7, 3},
		{3, 12, 54, -12, 5}
	};

	cout << "Printimi permes unazes for: " << endl;
	for (int rreshti = 0; rreshti < 3; rreshti++)
	{
		cout << "Rreshti " << rreshti + 1 << ": ";
		for (int kolona = 0; kolona < 5; kolona++)
		{
			cout << matrica[rreshti][kolona] << " ";
		}

		cout << endl;
	}

	cout << endl << "Printimi permes unazes while: " << endl;
	int rreshti = 0, kolona = 0;
	while (rreshti < 3) {
		cout << "Rreshti " << rreshti + 1 << ": ";

		kolona = 0;
		while (kolona < 5) {
			cout << matrica[rreshti][kolona] << " ";
			kolona++;
		}
		cout << endl;
		rreshti++;
	}

	return 0;
}

/*
	Detyra 5
	Inicializimi i matrices me vlera permes tastieres dhe llogaritja
	e shumes se anetareve te matrices
*/	
#include <iostream>

using namespace std;

int main() {

	const int nrRreshtave = 2, nrKolonave = 3;
	int matrica[nrRreshtave][nrKolonave] = {};
	int shuma = 0;

	for (int rreshti = 0; rreshti < nrRreshtave; rreshti++)
	{
		for (int kolona = 0; kolona < nrKolonave; kolona++)
		{
			cout << "Matrica[" << rreshti << "][" << kolona << "]: ";
			cin >> matrica[rreshti][kolona];
		}
	}

	int rreshti = 0, kolona = 0;
	while (rreshti < nrRreshtave) {
		kolona = 0;
		while (kolona < nrKolonave) {
			cout << shuma << " + " << matrica[rreshti][kolona];
			shuma = shuma + matrica[rreshti][kolona];
			cout << " = " << shuma << endl;
			kolona++;
		}
		rreshti++;
	}

	cout << "Shuma: " << shuma << endl;

	return 0;
}

/*
	Detyra 5.1
	Shuma e anetareve te matrices ne inicializim
*/
#include <iostream>

using namespace std;

int main() {

	const int nrRreshtave = 2, nrKolonave = 3;
	int matrica[nrRreshtave][nrKolonave] = {};
	int shuma = 0;

	for (int rreshti = 0; rreshti < nrRreshtave; rreshti++)
	{
		for (int kolona = 0; kolona < nrKolonave; kolona++)
		{
			cout << "Matrica[" << rreshti << "][" << kolona << "]: ";
			cin >> matrica[rreshti][kolona];
			cout << shuma << " + " << matrica[rreshti][kolona];
			shuma = shuma + matrica[rreshti][kolona];
			cout << " = " << shuma << endl;
		}
	}

	cout << "Shuma: " << shuma << endl;

	return 0;
}

/*
	Detyra 6
	Numerimi i anetareve pozitiv dhe negativ te matrices
*/
#include <iostream>

using namespace std;

int main() {

	const int nrRreshtave = 2, nrKolonave = 3;
	int matrica[nrRreshtave][nrKolonave] = {};
	int shuma = 0, nrPozitiv = 0, nrNegativ = 0;

	for (int rreshti = 0; rreshti < nrRreshtave; rreshti++)
	{
		for (int kolona = 0; kolona < nrKolonave; kolona++)
		{
			cout << "Matrica[" << rreshti << "][" << kolona << "]: ";
			cin >> matrica[rreshti][kolona];
			cout << shuma << " + " << matrica[rreshti][kolona];
			shuma = shuma + matrica[rreshti][kolona];
			cout << " = " << shuma << endl;

			matrica[rreshti][kolona] < 0 ? nrNegativ++ : nrPozitiv += 1;
			/*if (matrica[rreshti][kolona] < 0) {
				nrNegativ++;
			}
			else {
				nrPozitiv += 1;
			}*/
		}
	}

	cout << "Shuma: " << shuma << endl;
	cout << "Numri i anetareve pozitiv: " << nrPozitiv << endl;
	cout << "Numri i anetareve negativ: " << nrNegativ << endl;

	return 0;
}

/*
	Detyra 7
	Printimi i matrices(forme tjeter)
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int nrRreshtave = 2, nrKolonave = 3;
	int matrica[nrRreshtave][nrKolonave] = {};
	int shuma = 0, nrPozitiv = 0, nrNegativ = 0;

	for (int rreshti = 0; rreshti < nrRreshtave; rreshti++)
	{
		for (int kolona = 0; kolona < nrKolonave; kolona++)
		{
			cout << "Matrica[" << rreshti << "][" << kolona << "]: ";
			cin >> matrica[rreshti][kolona];
		}
	}
	cout << "Matrica [" << nrRreshtave << "][" << nrKolonave << "] = {" << endl;
	for (int i = 0; i < nrRreshtave; i++)
	{
		cout << setw(3) << "{";
		for (int j = 0; j < nrKolonave; j++)
		{
			if (j < nrKolonave - 1) {
				cout << setw(2) << matrica[i][j] << ", ";
			}
			else {
				cout << setw(2) << matrica[i][j] << "}";
			}
			
		}

		if (i < nrRreshtave - 1) {
			cout << ", ";
		}

		cout << endl;
	}

	cout << "}";

	return 0;
}