/*
	Detyra 1 
	Te llogaritet shuma e numrave prej 1 deri ne n, ku vlera e n percaktohet permes tastieres.
	Per llogaritje te shumes te perdoret komanda goto.
	Shembull: nese n = 4 => 1 + 2 + 3 + 4 = 10
			             => 0 + 1 + 2 + 3 + 4 = 10
*/
#include <iostream>

using namespace std;

int main() {

	int n, shuma = 0, i = 0;

	cout << "Shenoni vleren e n: ";
	cin >> n; // 3

shuma:
	shuma += i; // 1. shuma = shuma + i = 0, 2. shuma = 1, 3. shuma = 3, 4. shuma = 6
	i++; // 1. i = 1, 2. i = 2, 3. i = 3, 4. i = 4

	if (i <= n) {  
		cout << "Brenda kushtit per goto" << endl;
		goto shuma;
	}


	cout << "Shuma: " << shuma << endl;
	return 0;
}

/*
	Detyra 2 - Te printohen numrat prej 1 deri 5 permes unazes
	while.
*/
#include <iostream>

using namespace std;

int main() {
	
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	cout << 4 << endl;
	cout << 5 << endl;

	cout << "Printimi permes unazes while: " << endl;
	int numri = 1;

	while (numri <= 5) {
		cout << numri << endl;
		numri++; // numri += 1
	}

	cout << "Perfundon ekzekutimi i unazes while." << endl;

	return 0;
} 

/*
	Detyra 3 
	Te llogaritet shuma e numrave prej 1 deri ne n, ku vlera e n percaktohet permes tastieres.
	Per llogaritje te shumes te perdoret unaza while.
	Shembull: nese n = 4 => 1 + 2 + 3 + 4 = 10
			             => 0 + 1 + 2 + 3 + 4 = 10
*/
#include <iostream>

using namespace std;

int main() {

	int n, shuma = 0, i = 0;

	cout << "Shenoni vleren e n: ";
	cin >> n;

	// n = 4 => 0 + 1 + 2 + 3 + 4 = 10

	while (i <= n) {
		string lidhesa = (i == n) ? " = " : " + ";
		cout << i << lidhesa;
		shuma = shuma + i;
		i++;
	}

	cout << shuma << endl;

	return 0;
}

/*
	Detyra 4 - Te llogaritet shuma e numrave prej 1 deri ne n,
	duke perdorur unazen while. Vlera e variables n te percaktohet
	permes tastieres
*/
#include <iostream>

using namespace std;

int main() {
	int n, i = 0, shuma = 0;
	
	cout << "n: ";
	cin >> n; // 4

	/* 1. i < n = > 0 < 4
	      i++ => i = 1
		  1 < 4 => 1 + 
		  shuma = shuma + i => shuma = 0 + 1 = 1
	   2. i < n => 1 < 4
		  i++ => i = 2
		  2 < 4 => 1 + 2 +
		  shuma = 1 + 2 = 3
	   3. i < n => 2 < 4
	      i++ => i = 3
		  3 < 4 => 1 + 2 + 3 +
		  shuma = 3 + 3 = 6
	   4. i < n => 3 < 4
	      i++ => i = 4
		  4 < 4 => 1 + 2 + 3 + 4
		  shuma = shuma + i = 6 + 4 = 10
	   5. 4 < 4 => FALSE

		1 + 2 + 3 + 4 = 10
	*/
	while (i < n) {   
		i++;
		if (i < n) {
			cout << i << " + ";
		}
		else {
			cout << i;
		}
		shuma = shuma + i;
	}
	
	cout << " = " << shuma << endl;

	return 0;
}

/*
	Detyra 5 - Te llogaritet shprehja prej 2 deri ne n,
	per 2*i duke perdorur unazen while
*/
#include <iostream>
using namespace std;

int main()
{
	int shuma = 0, i = 2; 
	int n;
	
	cout << "n=";
	cin >> n;

	// 2 * 2 + 2 * 3 = 10
	
	while (i <= n) {
		if (i < n) {
			cout << 2 << " * " << i << " + ";
		}
		else {
			cout << 2 << " * " << i;
		}
		shuma += 2 * i;
		i++;
	}
	cout << " = " << shuma << endl;

	return 0;
}

/*
	Detyra 6
	Te llogaritet shuma e numrave prej 1 deri ne n, ku vlera e n
	percaktohet permes tastieres. Per llogaritje te shumes te perdoret
	unaza do-while.
*/
#include <iostream>

using namespace std;

int main() {
    
	int n, i = 7, j = 7, shumaDoWhile = 0, shumaWhile = 0;
	cout << "Shenoni vleren e n: ";
	cin >> n;

	do {
		shumaDoWhile = shumaDoWhile + i;
		i++;
	} while (i <= n);

	while (j <= n) {
		shumaWhile = shumaWhile + j;
		j++;
	}

	cout << "Shuma prej unazes do-while: " << shumaDoWhile << endl;
	cout << "Shuma prej unazes while: " << shumaWhile << endl;

    return 0;
}

/*
	Detyra 7
	Te printohen numrat nga 1 deri ne n, duke perdorur unazen for. Vlera e n
	te lexohet permes tastieres
*/
#include <iostream>

using namespace std;

int main() {
    
	int n;

	cout << "Shenoni vleren e variables n: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}

	cout << endl << "Unaza for perfundoi" << endl;

    return 0;
}

/*
	Detyra 8
	Te printohen numrat prej 1 deri ne n duke perdorur unazen for.
	Nese vlera e n tejkalon numrin 6, te nderpritet printimi i numrave
*/
#include <iostream>

using namespace std;

int main() {
    
	int n;

	cout << "Vlera e n: ";
	cin >> n;

	cout << "Printimi i numrave prej 1 deri ne " << n << "." << endl;
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}

	cout << endl << "Printimi i numrave prej 1 deri ne " << n << " me kusht." << endl;
	for (int i = 1; i <= n; i++) {
		if (i > 6) {
			cout << "Numri " << n << " tejkalon numrin 6. Perfundo ekzekutimin e unazes" << endl;
			break;
		}
		cout << i << " ";
	}

	cout << "Programi perfundoi" << endl;


    return 0;
}

/*
	Detyra 9
	Te llogaritet shuma e numrave cift prej 1 deri ne n duke perdorur unazen for
*/
#include <iostream>

using namespace std;

int main() {

	int n, shuma = 0;

	cout << "Vlera e n: ";
	cin >> n;

	// Menyra e pare
	/*for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) {
			cout << "Numri " << i << " eshte cift." << endl;
			shuma += i;
		}
	}*/

	// Menyra e dyte
	/*for (int i = 2; i <=n ; i = i + 2)
	{
		cout << "Numri " << i << ". ";
		shuma += i;
	}*/

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0) {
			cout << "Numri " << i << " eshte tek." << endl;
			continue;
		}

		shuma += i;
	}

	cout << "Shuma e numrave cift: " << shuma << endl;

	return 0;
}

/*
	Detyra 10	
	Te llogaritet prodhimi i numrave prej 1 deri ne n, duke perdorur unazen for.
*/
#include <iostream>
using namespace std;

int main()
{
    int prodhimi = 1;
    int n;
    cout << "Shtyp vleren e n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cout << i;
        }
        else {
            cout << i << " * ";
        }
        prodhimi *= i; // prodhimi = prodhimi * i
    }

    cout << " = " << prodhimi;

    return 0;
}

/*
	Detyra 11
	Te llogaritet shuma e numrave prej 1 deri ne n, duke perdorur unazen while, do-while dhe for
*/
#include <iostream>
using namespace std;

int main() {

	int n, i = 1, shuma = 0;

	cout << "Vlera e n: ";
	cin >> n;

	while (i <= n) {
		cout << "Brenda unazes while, ekzekutimi " << i << endl;
		shuma += i;
		i++;
	}

	cout << "Shuma prej unazes while: " << shuma << endl;

	i = 1, shuma = 0;
	do {
		cout << "Brenda unazes do-while, ekzekutimi " << i << endl;
		shuma += i;
		i++;
	} while (i <= n);

	cout << "Shuma prej unazes do-while: " << shuma << endl;

	shuma = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << "Brenda unazes for, ekzekutimi " << i << endl;
		shuma += i;
	}

	cout << "Shuma prej unazes for: " << shuma << endl;

    return 0;
}

/*
	Detyra 12	
	Te llogaritet shprehja F = (4n - 2)!
*/
#include <iostream>
using namespace std;

int main()
{
	// Prodhimi 1 -> 4 => 1 * 2 * 3 * 4 = 24
	// Faktorieli 4 => 4! = 4 * 3 * 2 * 1
	// (4 * 1 - 2) = 2! => 2 * 1 
	// Prodhimi 1 -> 2 => 1 * 2

	int n, faktorieli = 1;
	cout << "Vlera e n: ";
	cin >> n;

	for (int i = 1; i <= 4 * n - 2; i++)
	{
		faktorieli = faktorieli * i;
	}

	cout << "Faktorieli: " << faktorieli << endl;

	return 0;
}

/*
	Detyra 13
	Te lexohen ne menyre te vazhdueshme numra nga tastiera dhe te llogaritet shuma e tyre. Ne rast se numri 
	i lexuar eshte negativ, te nderpritet leximi i numrave dhe te printohet shume e arritur deri ne ate
	pike.
*/
#include <iostream>
using namespace std;

int main()
{
    int shuma = 0;
    int numri;

    /*while (true) {
        cout << "Shtyp vleren e numrit: ";
        cin >> numri;
        
        if (numri < 0) {
            break;
        }

        shuma += numri;
    }*/

    for (;true;)
    {
        cout << "Shtyp vleren e numrit: ";
        cin >> numri;

        if (numri < 0) {
            break;
        }

        shuma += numri;
    }

    cout << "Shuma: " << shuma << endl;

	return 0;
}

/*
	Detyra 14
	Të shkruhet programi i plotë (përfshirë ‘include’ dhe funksionin main) i cili lexon nga
tastiera numrat e plotë a, b, c. Të llogaritet shuma dhe prodhimi i vlerave të lexuara si dhe të
paraqiten ekuivalentët oktal dhe heksadecimal të shumës dhe prodhimit të arritur.
*/
#include <iostream>

using namespace std;

int main() {
	
	int a, b, c;

	cout << "Vlera e a: ";
	cin >> a;
	cout << "Vlera e b: ";
	cin >> b;
	cout << "Vlera e c: ";
	cin >> c;

	int shuma = a + b + c;
	int prodhimi = a * b * c;

	cout << "Shuma decimal: " << shuma << endl;
	cout << "Prodhimi decimal: " << prodhimi << endl;

	cout << "Shuma oktal: " << oct << shuma << endl;
	cout << "Prodhimi oktal: " << oct << prodhimi << endl;

	cout << "Shuma heksadecimal: " << hex << shuma << endl;
	cout << "Prodhimi heksadecimal: " << hex << prodhimi << endl;

	cout << "Shuma decimal: " << dec << shuma << endl;
	cout << "Prodhimi decimal: " << dec << prodhimi << endl;

    return 0;
}

/*
	Detyra 15
	Të shkruhet kodi lexon një numër të plotë nga tastiera. Numri i lexuar të jetë mes
numrave 1 dhe 7. Për cilën do vlerë tjetër të ndërpritet ekzekutimi i programit. Në rastin kur
numri i lexuar është mes numrave 1 dhe 5, të printohet mesazhi “Ditë pune”, në të kundërt
të printohet mesazhi “Vikend”.
*/
#include <iostream>
using namespace std;

int main() {

    int numri;

    cout << "Shkruaj nje numer prej 1-7: ";
    cin >> numri;

    if (numri >= 1 && numri <= 7) {
        if (numri < 6)
            cout << "Dite pune" << endl;
        else
            cout << "Dite pushimi" << endl;

    }
    else
        cout << "Numri nuk eshte valid";

    return 0;

}

// Menyre tjeter
#include <iostream>

using namespace std;

int main() {
    int dita = 1;
    cout << "Jepni diten: " << endl;
    cin >> dita;

    if (dita >= 1 && dita <= 5) {
        cout << "Dite pune" << endl;
    }
    else if (dita == 6 || dita == 7) {
        cout << "Vikend" << endl;
    }
    else {
        cout << "Numer jo valid" << endl;
    }

    switch (dita)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Dite pune"; break;
    case 6:
    case 7:
        cout << "Vikend"; break;
    default:
        cout << "Numer jo valid" << endl;
    }

    return 0;
}

/*
	Detyra 16
	Te llogaritet shuma e numrave prej 2 deri ne n e shprehjes i^2
*/
#include <iostream>

using namespace std;

int main() {
    
	int n, shuma = 0, i = 2;

	cout << "Vlera e n: ";
	cin >> n;

	// shuma prej 2 deri ne n e i * i => n = 3 => (2 * 2) + (3 * 3) = 13
	while (i <= n) {
		shuma += i * i;
		i++;
	}

	cout << "Shuma: " << shuma << endl;

    return 0;
}

/*
	Detyra 17
	Të shkruhet programi që pranon numrin e pikëve për kolokviumin e parë, i cili ka
	peshën e 25 pikëve. Varësisht nga numri i pikëve të arritura të kalkulohet
	përqindja e arritur nga studenti.
*/
#include <iostream>

using namespace std;

int main() {
    
	const int totali = 25;
	int piket;

	cout << "Shenoni numrin e pikeve: ";
	cin >> piket;

	int perqindja = piket * 100 / totali;

	cout << "Perqindja e arritur: " << perqindja << endl;

    return 0;
}

/*
	Detyra 18
	Të lexohen 6 numra të plotë nga tastiera. Për secilin nga numrat të kontrollohet nëse
	është i plotpjesëtueshëm me 3, ashtu që në fund të dihet saktë numri i vlerave të lexuara të
	cilat plotpjesëtohen me numrin 3.
*/
#include <iostream>

using namespace std;

int main() {
    
	int plotepjestueshemMe3 = 0;
	int numri;
	int s=0;

	for (int i = 1; i <= 6 ; i++)
	{
		cout << "Shenoni numrin " << i << ": ";
		cin >> numri;

		if (numri % 3 == 0) {
			plotepjestueshemMe3++;
		}
s=s+numri;
	}

	cout << plotepjestueshemMe3 << " numra plotepjestohen me 3." << endl;
	cout<<"Shuma e numrave eshte"<<endl;
	cout<<s;

    return 0;
}