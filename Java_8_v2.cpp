/*
	Detyra 1 - Deklarimi dhe inicializimi vargut
*/
#include <iostream>
using namespace std;

int main()
{
	int vargu[5]{5, 4, -2};  // {5, 4, -2, 0, 0}

	cout << vargu[1] << endl; // 4
	cout << vargu[3] << endl; // 0

	vargu[4] = vargu[0]; // {5, 4, -2, 0, 5}

	cout << vargu[0] << endl; // 5
	cout << vargu[4] << endl; // 5

	vargu[3] = vargu[4] - vargu[2]; // vargu[3] = 5 - (-2) = 7 => {5, 4, -2, 7, 5}
	cout << vargu[3]; // 7

	return 0;
}


/*
	Detyra 2 - Printimi i elementeve te vargut
*/
#include <iostream>
using namespace std;

int main()
{
	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut] = { 7, 9, 2, -4, 3 };

	cout << vargu[0] << ", "
		<< vargu[1] << ", "
		<< vargu[2] << ", "
		<< vargu[3] << ", "
		<< vargu[4] << endl;

	for (int i = 0; i < gjatesiaVargut; i++) {
		cout << "Anetari ne indeksin " << i << " eshte: " << vargu[i] << endl;
	}
	// i = 0 -> 4 => , 0, 1, 2, 3
	for (int i = 0; i < gjatesiaVargut; i++) {
		if (i < gjatesiaVargut - 1) {
			cout << vargu[i]
				<< ", ";
		}
		else {
			cout << vargu[i];
		}

	}


	return 0;
}

/*
	Detyra 3 - Inicializimi i vargut permes tastieres
*/
#include <iostream>
using namespace std;

int main()
{
	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut];

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Shenoni vleren per poziten " << i << ": ";
		cin >> vargu[i];
	}

	cout << "Vlerat e lexuara te vargut: " << endl;
	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Indeksi " << i << ", vlera: " << vargu[i] << endl;
	}

	return 0;
}

/*
	Detyra 3.2
	Unaza while per inicializim te vargut
*/

#include <iostream>

using namespace std;

int main() {
	
	const int gjatesiaVargut = 6;
	int vargu[gjatesiaVargut];
	int pozita = 0, shuma = 0;

	cout << "Caktimi i vlerave permes tastieres: " << endl;
	while (pozita < gjatesiaVargut) {
		cout << "Vargu[" << pozita << "]: ";
		cin >> vargu[pozita];
		pozita += 1;
	}

	cout << "Elementet e vargut jane: ";
	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << vargu[i] << " ";
		shuma += vargu[i];
	}

	cout << endl << "Shuma: " << shuma << endl;

	return 0;
}

/*
	Detyra 4
	Te deklarohet nje varg me emrin A dhe me gjatesi 6.
	Inicializimi i vargut me vlera te behet permes tastieres
	Te printohen elementet e vargut ne formatin:
	A = [1, 2, 3, 4, 5, 6]
*/

#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 6;
	int A[gjatesiaVargut] = {};
	
	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}

	cout << "A = [";
	for (int i = 0; i < gjatesiaVargut; i++) {
		string lidhesa = (i == gjatesiaVargut - 1) ? "]" : ", ";
		cout << A[i] << lidhesa;
	}


	return 0;
}


/*
	Detyra 5 - Shuma e anetareve te vargut
*/
#include <iostream>
using namespace std;

int main()
{
	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut];

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Shenoni vleren per poziten " << i << ": ";
		cin >> vargu[i];
	}

	cout << "Vlerat e lexuara te vargut: " << endl;
	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Indeksi " << i << ", vlera: " << vargu[i] << endl;
	}

	int shuma = 0;
	for (int i = 0; i < gjatesiaVargut; i++)
	{
		shuma += vargu[i];
	}

	cout << "Shuma e anetareve te vargut: " << shuma << endl;

	return 0;
}

/*
	Detyra 5.1
*/
#include <iostream>
using namespace std;

int main()
{
	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut];

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Shenoni vleren per poziten " << i << ": ";
		cin >> vargu[i];
	}

	int shuma = 0;
	cout << "Vlerat e lexuara te vargut: " << endl;
	for (int i = 0; i < gjatesiaVargut; i++)
	{
		shuma += vargu[i];
		cout << "Indeksi " << i << ", vlera: " << vargu[i] << endl;
	}

	cout << "Shuma e anetareve te vargut: " << shuma << endl;

	return 0;
}

/*
	Detyra 5.2
*/

#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 8;
	int A[gjatesiaVargut] = {};
	int shuma = 0;
	
	for (int indeksi = 0; indeksi < gjatesiaVargut; indeksi++)
	{
		cout << "A[" << indeksi << "]: ";
		cin >> A[indeksi];
		shuma += A[indeksi];
	}

	cout << "Shuma: " << shuma << endl;

	return 0;
}

/*
	Detyra 6 - Shuma e anetareve ne indekset cift
	te vargut
*/
#include <iostream>
using namespace std;

int main()
{
	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut];

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Shenoni vleren per poziten " << i << ": ";
		cin >> vargu[i];
	}

	int shumaNeIndeksCift = 0;
	int shumaNumraveCift = 0;
	cout << "Vlerat e lexuara te vargut: " << endl;
	for (int i = 0; i < gjatesiaVargut; i++)
	{
		if (i % 2 == 0) {
			shumaNeIndeksCift += vargu[i];
		}

		if (vargu[i] % 2 == 0) {
			shumaNumraveCift += vargu[i];
		}

		cout << "Indeksi " << i << ", vlera: " << vargu[i] << endl;
	}

	cout << "Shuma e anetareve cift te vargut: " << shumaNumraveCift << endl;
	cout << "Shuma e anetareve ne indekset cift te vargut: " << shumaNeIndeksCift << endl;

	return 0;
}

/*
	Detyra 7 - Kerkimi i nje elementi brenda vargut
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut] = {6, 4, -1, 3, 2};

	int numri;
	bool gjendetNeVarg = false;

	cout << "Shenoni numrin per kerkim: ";
	cin >> numri;

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Hapi: " << i << endl;
		if (vargu[i] == numri) {
			gjendetNeVarg = true;
			break;
		}
	}

	string mesazhi = gjendetNeVarg ? "Numri gjendet ne varg" : "Numri nuk gjendet ne varg";

	cout << mesazhi << endl;

	return 0;
}

/*
	Detyra 8
	Gjetja e anetarit minimal dhe maksimal brenda vargut
*/

#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 7;
	int vargu[gjatesiaVargut] = {};
	int i = 0;

	while (i < gjatesiaVargut) {
		cout << "Vargu[" << i << "]: ";
		cin >> vargu[i];
		i++;
	}

	/*
		[4, 6, 1, 3, -1] 
		min = 4, max = 4

		1. i = 0
		vlera = 4
		min = 4
		max = 4

		vlera < min == FALSE
		vlera > max == FALSE

		2. i = 1
		vlera = 6, min = 4, max = 4
		vlera < min == FALSE
		vlera > max == TRUE => max = 6

		3. i = 2
		vlera = 1, min = 4, max = 6
		vlera < min == TRUE => min = 1
		vlera > max == FALSE

		4. i = 3
		vlera = 3, min = 1, max = 6
		vlera < min == FALSE
		vlera > max == FALSE

		5. i = 4
		vlera = -1, min = 1, max = 6
		vlera < min == TRUE => min = -1
		vlera > max == FALSE

		NE FUND:
		min = -1, max = 6
	*/

	int min = vargu[0], max = vargu[0];
	
	cout << "Minimumi fillestar: " << min << endl;
	cout << "Maksimumi fillestar: " << max << endl;
	for (int i = 1; i < gjatesiaVargut; i++)
	{
		cout << "Vlera qe po krahasohet: " << vargu[i] << endl;

		if (vargu[i] < min) {
			min = vargu[i];
			cout << "Minimum i ri: " << vargu[i] << endl;
		}
		else if (vargu[i] > max) {
			max = vargu[i];
			cout << "Maksimum i ri: " << vargu[i] << endl;
		}
	}

	cout << "Vlera minimale brenda vargut eshte: " << min << endl;
	cout << "Vlera maksimale brenda vargut eshte: " << max << endl;

	return 0;
}