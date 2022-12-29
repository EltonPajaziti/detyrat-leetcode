/*
	Detyra 1 - \n
*/
#include <iostream>

using namespace std;

int main() {
	
	cout << "Rreshti i pare" << endl;
	cout << "Rreshti i dyte" << endl;
	cout << endl;
	cout << "Rreshti i katert \n";
	cout << "Rreshti i peste \n";
	cout << "\n";

	return 0;
}

/*
	Detyra 2 - Shembuj me karaktere speciale
*/
#include <iostream>

using namespace std;

int main() {
	
	cout << "Rreshti i \"pare\"" << endl;
	cout << "\tRreshti i dyte" << endl;
	cout << "Rreshti i \\tret\x89\\" << endl;

	return 0;
}


/*
	Detyra 3 - cout.width, cout.fill, cout.precision
*/
#include <iostream>

using namespace std;

int main()
{
    cout.width(5);
    cout << "Test" << endl;

    cout.width(10);
    cout.fill('@');
    cout << "Test" << endl;

    cout.width(10);
    cout << "Test" << endl;

    cout.width(5);
    cout.fill(' ');
    cout << "Test" << endl;

    double a = 2.345723;
    cout << a << endl;

    cout.precision(4);
    cout << a << endl;

    return 0;
}

/*
	Detyra 4 - setw, setfill, left, right
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // cout.width(10) == setw(10)
    cout << setw(10) << "Test" << endl;

    // cout.fill('@') == setfill('@')
    cout << setw(10) << setfill('@') << "Test" << endl;
    cout << setw(10) << "Test" << endl;
    cout << setw(10) << right << "Test" << endl;
    cout << setw(10) << left << "Test" << endl;
    cout << setw(10) << setfill(' ') << "Test" << endl;
    cout << setw(10) << setfill('!') << "Test" << endl;

    return 0;
}

/*
	Detyra 5 - setprecision
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // cout.precision(3) == setprecision(3)
    double vlera = 2.34235253;
    cout << vlera << endl;

    cout << setprecision(3) << vlera << endl;
    double numri = 2.346453;
    cout << numri << endl;

    return 0;
}
/*
	Detyra 6 - showpos, noshowpos, showpoint, noshowpoint
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 3;
    int b = -4;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "a: " << showpos << a << endl;
    cout << "b: " << b << endl;

    int c = 6;
    cout << "c: " << noshowpos << c << endl;

    double d = 2;
    cout << "d: " << d << endl;
    cout << "d: " << showpoint << d << endl;

    double e = 3;
    cout << noshowpoint;
    cout << "e: " << e << endl;

    return 0;
}

/*
	Detyra 7 - Shtypja e shkronjes A permes karakterit 'A'
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char a = 'A';
    cout << setw(7) << a << endl;
    cout << setw(6) << a << setw(2) << a << endl;
    cout << setw(5) << a << setw(4) << a << endl;
    cout << setw(4) << a << setw(2) << a << setw(2) << a << setw(2) << a << endl;
    cout << setw(3) << a << setw(8) << a << endl;
    cout << setw(2) << a << setw(10) << a << endl;

    return 0;
}
/*
	Detyra 8 - Formatimi i numrit me vlere 2 ne 2.00$
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double vlera = 2;
    cout << "Vlera: "
        << setw(5)
        << setprecision(3)
        << showpoint
        << setfill('$')
        << left
        << vlera
        << endl;


    return 0;
}
/*
	Detyra 9 - oct, dec, hex, uppercase
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cout << "Shenoni vleren per variablen a: ";
    cin >> a;

    cout << "Vlera e lexuar per variablen a: " << a << endl;
    cout << "Vlera e variables a ne sistemin oktal: " << oct << a << endl;
    cout << "Vlera e variables a ne sistemin heksadecimal: " << hex << a << endl;
    cout << "Vlera e variables a ne sistemin heksadecimal: " << hex << uppercase << a << endl;
    cout << "Vlera e variables a: " << a << endl;
    cout << "Vlera e variables a: " << dec << a << endl;


    return 0;

}
/*
	Detyra 10 - Kushtezimi if
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cout << "Shenoni nje vlere per variablen a: ";
    cin >> a;

    if (a == 5)
    {
        cout << "Vlera e a eshte e barabarte me 5" << endl;
    }

    cout << "Programi perfundoi" << endl;

    return 0;
}
/*
	Detyra 11 - Kushtezimi if {}
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cout << "Shenoni nje vlere per variablen a: ";
    cin >> a;

    if (a == 5)
        cout << "Brenda kushtit if == 5" << endl;
    cout << "Vlera e a eshte e barabarte me 5" << endl;

    cout << "Programi perfundoi" << endl;

    return 0;
}

/*
	Detyra 11.1 - Kushtezimi if {}
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;

    cout << "Shenoni nje vlere per variablen a: ";
    cin >> a;

    if (a == 5) {
        cout << "Brenda kushtit if == 5" << endl;
        cout << "Vlera e a eshte e barabarte me 5" << endl;
    }

    cout << "Programi perfundoi" << endl;

    return 0;
}
/*
	Detyra 12 - Kushtezimi if-else
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int piket;

    cout << "Sh\x89noni pik\x89t nga kolokviumi i par\x89: ";
    cin >> piket;

    if (piket >= 20) {
        cout << "Ju keni kaluar pragun." << endl;
    }
    else {
        cout << "Ju nuk keni kaluar pragun." << endl;
    }

    return 0;
}
/*
	Detyra 12 - Kushtezimi if-else pa {}
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int piket;

    cout << "Sh\x89noni pik\x89t nga kolokviumi i par\x89: ";
    cin >> piket;

    if (piket >= 20)
        cout << "Ju keni kaluar pragun." << endl;

    else
        cout << "Ju nuk keni kaluar pragun." << endl;

    return 0;
}

/*
	Detyra 12.1 - Pa bllokun else
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int piket;

    cout << "Sh\x89noni pik\x89t nga kolokviumi i par\x89: ";
    cin >> piket;

    if (piket >= 20) {
        cout << "Ju keni kaluar pragun." << endl;
    }

    cout << "Ju nuk keni kaluar pragun." << endl;

    return 0;
}
/*
	Detyra 12.2 - Permiresimi i 12.1
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int piket;

    cout << "Sh\x89noni pik\x89t nga kolokviumi i par\x89: ";
    cin >> piket;

    if (piket >= 20) {
        cout << "Ju keni kaluar pragun." << endl;

        return 0;
    }

    cout << "Ju nuk keni kaluar pragun." << endl;

    return 0;
}
