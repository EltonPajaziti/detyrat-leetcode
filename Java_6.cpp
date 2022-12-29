/*
	Detyra 1.1 - Switch
*/
#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Shenoni vleren e a: ";
    cin >> a;

    switch (a)
    {
    case 0:
        cout << "Numri i lexuar eshte 0" << endl;
        break;
    case 1:
        cout << "Numri i lexuar eshte 1" << endl;
        break;
	case 6:
        cout << "Numri i lexuar eshte 6" << endl;
        break;
    case 5:
        cout << "Numri i lexuar eshte 5" << endl;
        break;
    default:
        cout << "Numri i lexuar nuk eshte 0, 1, 5 dhe 6" << endl;
        break;
    }

    return 0;
}

/*
	Detyra 1.2 - Switch me case pa break
*/
#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Shenoni vleren e a: ";
    cin >> a;

    switch (a)
    {
    case 0:
        cout << "Numri i lexuar eshte 0" << endl;
        break;
    case 1:
        cout << "Numri i lexuar eshte 1" << endl;
        break;
	case 6:
        cout << "Numri i lexuar eshte 6" << endl;
    case 5:
        cout << "Numri i lexuar eshte 5" << endl;
        break;
    default:
        cout << "Numri i lexuar nuk eshte 0, 1, 5 dhe 6" << endl;
        break;
    }

    return 0;
}

/*
	Detyra 2 - Zanore dhe bashketingellore
*/
#include <iostream>

using namespace std;

int main()
{
    char shkronja;

    cout << "Shenoni shkronjen: ";
    cin >> shkronja;

    switch (shkronja)
    {
    case 'a':
        cout << "Zanore - " << shkronja << endl;
        break;
    case 'e':
        cout << "Zanore - " << shkronja << endl;
        break;
    case '\x89':
        cout << "Zanore - " << shkronja << endl;
        break;
    case 'i':
        cout << "Zanore - " << shkronja << endl;
        break;
    case 'o':
        cout << "Zanore - " << shkronja << endl;
        break;
    case 'u':
        cout << "Zanore - " << shkronja << endl;
        break;
    case 'y':
        cout << "Zanore - " << shkronja << endl;
        break;
    default:
        cout << "Bashketingellore - " << shkronja << endl;
        break;
    }

    return 0;
}

/*
	Detyra 3 - Operatori aritmetikor
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    float rezultati;
    char operatori;

    cout << "Shenoni vleren per variablen a: ";
    cin >> a;
    cout << "Shenoni vleren per variablen b: ";
    cin >> b;
    cout << "Shenoni operatorin: ";
    cin >> operatori;

    switch (operatori)
    {
    case '+':
        rezultati = a + b;
        break;
    case '-':
        rezultati = a - b;
        break;
    case '/':
        rezultati = a / (b * 1.0);
        break;
    case '*':
        rezultati = a * b;
        break;
    default:
        cout << "Operator i panjohur" << endl;
		// return 0;
    }

    cout << a << " " << operatori << " " << b << " = " << rezultati << endl;

    return 0;
}

/*
	Detyra 4 - Komanda goto
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    float rezultati;
    char operatori;

    cout << "Shenoni vleren per variablen a: ";
    cin >> a;
    cout << "Shenoni vleren per variablen b: ";
    cin >> b;

rizgjedh:
    cout << "Shenoni operatorin: ";
    cin >> operatori;

    switch (operatori)
    {
    case '+':
        rezultati = a + b;
        break;
    case '-':
        rezultati = a - b;
        break;
    case '/':
        rezultati = a / (b * 1.0);
        break;
    case '*':
        rezultati = a * b;
        break;
    default:
    {
        cout << "Operator i panjohur" << endl;
        goto rizgjedh;
    }
    }

    cout << a << " " << operatori << " " << b << " = " << rezultati << endl;

    return 0;
}

/*
	Detyra 4.1
*/	
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    float rezultati;
    char operatori, ndryshoOperatorin;

variablat:
    cout << "Shenoni vleren per variablen a: ";
    cin >> a;
    cout << "Shenoni vleren per variablen b: ";
    cin >> b;

rizgjedh:
    cout << "Shenoni operatorin: ";
    cin >> operatori;

    switch (operatori)
    {
    case '+':
        rezultati = a + b;
        break;
    case '-':
        rezultati = a - b;
        break;
    case '/':
        rezultati = a / (b * 1.0);
        break;
    case '*':
        rezultati = a * b;
        break;
    default:
    {
        cout << "Operator i panjohur" << endl;
        goto rizgjedh;
    }
    }

    cout << a << " " << operatori << " " << b << " = " << rezultati << endl;

    cout << "Deshironi te rizgjedhni nje operator te ri? ";
    cin >> ndryshoOperatorin;

    if (ndryshoOperatorin == 'p' || ndryshoOperatorin == 'P')
    {
        goto rizgjedh;
    }

    return 0;
}

/*
	Detyra 4.2
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    float rezultati;
    char operatori;
    char ndryshoOperatorin, ndryshoVariablat;

variablat:
    cout << "Shenoni vleren per variablen a: ";
    cin >> a;
    cout << "Shenoni vleren per variablen b: ";
    cin >> b;

rizgjedh:
    cout << "Shenoni operatorin: ";
    cin >> operatori;

    switch (operatori)
    {
    case '+':
        rezultati = a + b;
        break;
    case '-':
        rezultati = a - b;
        break;
    case '/':
        rezultati = a / (b * 1.0);
        break;
    case '*':
        rezultati = a * b;
        break;
    default:
    {
        cout << "Operator i panjohur" << endl;
        goto rizgjedh;
    }
    }

    cout << a << " " << operatori << " " << b << " = " << rezultati << endl;

    cout << "Deshironi te rizgjedhni nje operator te ri? ";
    cin >> ndryshoOperatorin;

    if (ndryshoOperatorin == 'p' || ndryshoOperatorin == 'P')
    {
        cout << "Deshironi te ri-inicializoni variablat? ";
        cin >> ndryshoVariablat;
        if (ndryshoVariablat == 'p' || ndryshoVariablat == 'P')
        {
            goto variablat;
        }

        goto rizgjedh;
    }

    return 0;
}