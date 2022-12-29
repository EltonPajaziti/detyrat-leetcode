/*
	Detyra 1.1 - Funksioni i pare
*/
#include <iostream>

using namespace std;

void funksioniPare();

int main() {


	for (int i = 0; i < 5; i++)
	{
		cout << "Mesazh nga funksioni main" << endl;	
	}
	
	funksioniPare();

	cout << "Perfundoni programi" << endl;

	return 0;
}

void funksioniPare() {
	cout << "Mesazh nga funksioni i pare" << endl;
}

/*
	Detyra 1.2 - Funksioni i pare
*/
#include <iostream>

using namespace std;

void funksioniPare() {
	cout << "Mesazh nga funksioni i pare" << endl;
}

int main() {


	for (int i = 0; i < 5; i++)
	{
		cout << "Mesazh nga funksioni main" << endl;
	}

	funksioniPare();

	cout << "Perfundoni programi" << endl;

	return 0;
}

/*
	Detyra 1.3 - Funksioni i pare
*/
#include <iostream>

using namespace std;

void funksioniPare() {
	cout << "Mesazh nga funksioni i pare" << endl;
}

int main() {


	for (int i = 0; i < 5; i++)
	{
		cout << "Mesazh nga funksioni main" << endl;
	}

	funksioniPare();

	for (int i = 0; i < 3; i++)
	{
		cout << "Mesazh nga funksioni main" << endl;
	}

	cout << "Perfundoni programi" << endl;

	return 0;
}

/*
	Detyra 2.1 - Funksioni me parametra
*/
#include <iostream>

using namespace std;

void lenda(string emriLendes) {
	cout << "Lenda: " << emriLendes << endl;
};

void lendaF() {
	cout << "Lenda: Fizike" << endl;
};

void lendaBP() {
	cout << "Lenda: Bazat e Programimit" << endl;
}

int main() {

	lendaBP();
	lendaF();

	lenda("Bazat e Programimit");
	lenda("Matematike");
	lenda("Fizike");

	return 0;
}

/*
	Detyra 2.2 - Funksioni me parameter me vlere te paracaktuar
*/
#include <iostream>

using namespace std;

void lenda(string emriLendes = "Bazat e Programimit") {
	cout << "Lenda: " << emriLendes << endl;
};

int main() {

	lenda("Matematike");
	lenda();
	lenda("Fizike");

	return 0;
}

/*
	Detyra 3.1 - Te definohet funksioni pa parametra lexoDheMbledh me tip kthyes void.
		Funksioni ka per detyre te lexoj dy numra te plote nga tastiera dhe printoj 
		shumen e dy numrave te lexuar.
*/
void lexoDheMbledh() {
	int a, b;
	cout << "Sheno numrin e pare: ";
	cin >> a;
	cout << "Sheno numrin e dyte: ";
	cin >> b;

	cout << "Shuma: " << a + b << endl;
}

int main() {

	lexoDheMbledh();

	return 0;
}

/*
	Detyra 3.2 - Komanda return brenda funksionit me tip kthyes void
*/

void lexoDheMbledh() {
	int a, b;
	cout << "Sheno numrin e pare: ";
	cin >> a;
	cout << "Sheno numrin e dyte: ";
	cin >> b;

	cout << "Shuma: " << a + b << endl;
	
	return; // nuk kthen vlere
}

int main() {

	lexoDheMbledh();

	return 0;
}

/*
	Detyra 3.3 - Funksioni lexoDheMbledh me tip kthyes int.
*/
int lexoDheMbledh() {
	int a, b;
	cout << "Sheno numrin e pare: ";
	cin >> a;
	cout << "Sheno numrin e dyte: ";
	cin >> b;

	return a + b;
}

int main() {

	// Menyra 1
	cout << lexoDheMbledh() << endl;

	// Menyra 2 
	int rezultati = lexoDheMbledh();
	cout << rezultati << endl;

	return 0;
}

/*
	Detyra 4 - Te definohet funksioni shuma me dy parametra qe 
	ka per detyre te kthej si rezultat shumen e dy numrave te pranuar.
*/
#include <iostream>

using namespace std;

int shuma(int a, int b) {
	return a + b;
}

int main() {

	// Menyra 1
	cout << shuma(2, 4) << endl;

	// Menyra 2 
	int a = 3, b = 7;
	int rezultati = shuma(a, b);
	cout << rezultati << endl;

	// Menyra 3
	int c = 2, d = 1;
	cout << shuma(c, d) << endl;

	// Menyra 4
	cout << shuma(d, 11) << endl;

	return 0;
}

/*
	Detyra 5.1 - Kalkulimi i shumes prej 1 deri ne n pa funksione
*/
#include <iostream>

using namespace std;

int main() {

	int n = 4;
	int shuma = 0;

	for (int i = 0; i <= n; i++)
	{
		shuma += i;
	}

	cout << "Shuma prej 1 deri ne " << n << " eshte: " << shuma << endl;

	n = 6;
	shuma = 0;

	for (int i = 0; i <= n; i++)
	{
		shuma += i;
	}

	cout << "Shuma prej 1 deri ne " << n << " eshte: " << shuma << endl;

	return 0;
}

/*
	Detyra 5.2 - Perdorimi i funksioneve per kalkulim te shumes prej 1 deri ne n
*/
#include <iostream>

using namespace std;

void shuma(int n) {
	int shuma = 0;

	for (int i = 0; i <= n; i++)
	{
		shuma += i;
	}

	cout << "Shuma prej 1 deri ne " << n << " eshte: " << shuma << endl;
}

int main() {

	shuma(4);
	shuma(6);

	return 0;
}

/*
	Detyra 6 - Funksionet shuma dhe prodhimi
*/
#include <iostream>

using namespace std;

int shuma(int n) {
	int shuma = 0;

	for (int i = 0; i <= n; i++)
	{
		shuma += i;
	}

	return shuma;
}

int prodhimi(int n) {
	int prodhimi = 1;
	for (int i = 1; i <= n; i++)
	{
		prodhimi *= i;
	}

	return prodhimi;
}

int main() {

	int n = 4;

	int s = shuma(n);
	int p = prodhimi(n);

	int rezultati = s + p;

	cout << "Rezultati: " << rezultati << endl;

	return 0;
}

/*
	Detyra 7
*/
#include <iostream>

using namespace std;

int shuma(int kufiriPoshtem, int kufiriEperm, int faktori, int mbledhori) {
	int shuma = 0;

	for (int i = kufiriPoshtem; i <= kufiriEperm; i++)
	{
		shuma += faktori * i + mbledhori;
	}

	return shuma;
}

int prodhimi(int kufiriPoshtem, int kufiriEperm, int faktori, int mbledhori) {
	int prodhimi = 1;
	for (int i = kufiriPoshtem; i <= kufiriEperm; i++) 
	{
		prodhimi *= faktori * i + mbledhori;
	}
	
	return prodhimi;
}

int main() {

	int n = 3;

	int shuma1 = shuma(1, 2 * n, 2, 1);
	int shuma2 = shuma(2, n, 4, 0);
	int prodhimi1 = prodhimi(1, n, 1, 3);

	cout << "Rezultati: " << 2 * shuma1 + shuma2 + prodhimi1 << endl;

	return 0;
}


/*
	Detyra 8
*/
#include <iostream>

using namespace std;

bool eshteCift(int numri) {
	if (numri % 2 == 0) {
		return true;
	}

	return false;
}

bool eshteTek(int numri) {
	return numri % 2 != 0;
}

int main() {

	int shuma = 0;
	int numri;

	while (true) {
		cout << "Sheno nje numer: ";
		cin >> numri;

		/*if (eshteCift(numri)) {
			shuma += numri;
		}
		else {
			break;
		}*/

		if (!eshteCift(numri)) {
			break;
		}

		shuma += numri;
	}

	cout << "Shuma: " << shuma << endl;

	return 0;
}