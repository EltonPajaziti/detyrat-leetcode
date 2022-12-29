/*
	Detyra 1 - if..else
*/
#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Vlera e variables a: ";
    cin >> a;

    if (a < 5)
    {
        y = 2 * a + 3;
    }
    else
    {
        y = 4 * a - 1;
    }

    cout << "y = " << y << endl;

    return 0;
}

/*
    Detyra 2 - Operatori i kushtezimit(ternary operator)
*/
#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Vlera e variables a: ";
    cin >> a;

    int y = (a < 5) ? 2 * a + 3 : 4 * a - 1;

    int z = (a >= 5) ? 4 * a - 1 : 2 * a + 3;

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}

/*
    Detyra 3.1 - Percaktimi i notes nga leximi i pikeve
*/
#include <iostream>

using namespace std;

int main()
{
    int piket;

    cout << "Numri i pikeve te provimit: ";
    cin >> piket;

    if (piket < 50)
    {
        cout << "Nota eshte 5" << endl;
    }
    else if (piket < 60)
    {
        cout << "Nota eshte 6" << endl;
    }
    else if (piket < 70)
    {
        cout << "Nota eshte 7" << endl;
    }
    else if (piket < 80)
    {
        cout << "Nota eshte 8" << endl;
    }
    else if (piket < 90)
    {
        cout << "Nota eshte 9" << endl;
    }
    else
    {
        cout << "Nota eshte 10" << endl;
    }

    return 0;
}

/* 
    Detyra 3.2 - Permiresimi per kontrollim te vlerave
    ne rangun 0 - 100
*/


#include <iostream>

using namespace std;

int main()
{
    int piket, nota;

    cout << "Numri i pikeve te provimit: ";
    cin >> piket;

    if (piket >= 0 && piket < 50)
    {
        nota = 5;
    }
    else if (piket >= 50 && piket < 60)
    {
        nota = 6;
    }
    else if (piket >= 60 && piket < 70)
    {
        nota = 7;
    }
    else if (piket >= 70 && piket < 80)
    {
        nota = 8;
    }
    else if (piket >= 80 && piket < 90)
    {
        nota = 9;
    }
    else if (piket >= 90 && piket <= 100)
    {
        nota = 10;
    }
    else
    {
        cout << "Piket e shenuara jane jo valide" << endl;

        return 0;
    }

    cout << "Nota: " << nota << endl;

    return 0;
}

/*
    Detyra 3.3
*/
#include <iostream>

using namespace std;

int main()
{
    int piket, nota = 20;

    cout << "Shenoni numrin e pikeve: ";
    cin >> piket;

    if (piket >= 90 && piket <= 100)
    {
        nota = 10;
    }
    else if (piket >= 80 && piket < 90)
    {
        nota = 9;
    }
    else if (piket >= 70 && piket < 80)
    {
        nota = 8;
    }
    else if (piket >= 60 && piket < 70)
    {
        nota = 7;
    }
    else if (piket >= 50 && piket < 60)
    {
        nota = 6;
    }
    else if (piket < 50 && piket >= 0)
    {
        nota = 5;
    }
    else
    {
        cout << "Piket jo valide" << endl;
    }

    if (piket >= 0 && piket <= 100)
    {
        cout << "Nota: " << nota << endl;
    }

    return 0;
}

/*
    Detyra 4.1 - Numrat pozitiv, negativ ose 0
*/
#include <iostream>

using namespace std;

int main()
{
    int numri;

    cout << "Shenoni vleren per variablen numri: ";
    cin >> numri;

    if (numri > 0)
    {
        cout << "Numri i lexuar eshte pozitiv." << endl;
    }
    else if (numri == 0)
    {
        cout << "Numri i lexuar eshte 0." << endl;
    }
    else
    {
        cout << "Numri i lexuar eshte negativ." << endl;
    }

    return 0;
}

/*
    Detyra 4.2 - Numrat cift dhe tek
*/
#include <iostream>

using namespace std;

int main()
{
    int numri;

    cout << "Shenoni vleren per variablen numri: ";
    cin >> numri;

    if (numri > 0)
    {
        cout << "Numri i lexuar eshte pozitiv." << endl;
        if (numri % 2 == 0)
        {
            cout << "Numri eshte cift" << endl;
        }
        else
        {
            cout << "Numri eshte tek" << endl;
        }
    }
    else if (numri == 0)
    {
        cout << "Numri i lexuar eshte 0." << endl;
    }
    else
    {
        cout << "Numri i lexuar eshte negativ." << endl;
    }

    return 0;
}

/*
    Detyra 4.3 - Operatori ternar brenda if
*/  
#include <iostream>

using namespace std;

int main()
{
    int numri;

    cout << "Shenoni vleren per variablen numri: ";
    cin >> numri;

    if (numri > 0)
    {
        cout << "Numri juaj " << numri << " eshte pozitiv." << endl;
        string mesazhi = (numri % 2 == 0) ? "Numri eshte cift" : "Numri eshte tek";
        // string mesazhi = numri % 2 != 0 ? "Numri eshte tek" : "Numri eshte cift";
        // (numri % 2 == 0) ? cout << "Numri eshte cift" << endl: cout << "Numri eshte tek" << endl;
        cout << mesazhi << endl;
    }
    else if (numri == 0)
    {
        cout << "Numri juaj eshte 0." << endl;
    }
    else
    {
        cout << "Numri juaj " << numri << " eshte negativ." << endl;
    }

    return 0;
}

/*
    Detyra 4.4 - Pa if te brendshem dhe pa operator ternar
*/
#include <iostream>

using namespace std;

int main()
{
    int numri;

    cout << "Shenoni vleren e numrit: ";
    cin >> numri;

    if (numri > 0 && numri % 2 == 0)
    {
        cout << "Vlera e numrit te lexuar eshte pozitiv dhe cift" << endl;
    }
    else if (numri > 0 && numri % 2 != 0) // (numri > 0)
    {
        cout << "Vlera e numrit te lexuar eshte pozitiv dhe tek" << endl;
    }
    else if (numri == 0)
    {
        cout << "Numri i lexuar eshte 0" << endl;
    }
    else
    {
        cout << "Numri i lexuar eshte negativ" << endl;
    }

    return 0;
}

