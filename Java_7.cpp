/* Detyra 1
    Te lexohet nje numer i plote nga tastiera. Varesisht nga numri i lexuar
    te llogaritet shuma e numrave prej 1 deri n(numri i lexuar) duke perdorur
    komanden goto.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0, perseritja = 0;

    cout << "Shenoni vleren per variablen n: ";
    cin >> n;

shuma:
    perseritja += 1;
    cout << "Hapi: " << perseritja << endl;
    shuma = shuma + perseritja;
    cout << "Shuma aktuale: " << shuma << endl;

    if (perseritja < n)
    {
        goto shuma;
    }

    cout << "Shuma: " << shuma << endl;

    return 0;
}


/* Detyra 2
    Te lexohet nje numer i plote nga tastiera. Varesisht nga numri i lexuar
    te llogaritet shuma e numrave prej 1 deri n(numri i lexuar) duke perdorur
    unazen while.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0, perseritja = 0;

    cout << "Vlera e variables n: ";
    cin >> n;

    while (perseritja <= n)
    {
        if (perseritja == n)
        {
            cout << perseritja;
        }
        else
        {
            cout << perseritja << " + ";
        }
        shuma = shuma + perseritja;
        perseritja++;
    }

    cout << endl;

    cout << "Shuma: " << shuma << endl;

    return 0;
}

/* Detyra 3
    Te llogaritet shuma e numrave prej 2 deri ne n per shprehjen 2*i
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0, i = 2;

    cout << "Vlera e variables n: ";
    cin >> n;

    while (i <= n)
    {
        shuma = shuma + 2 * i;
        i++;
    }

    cout << "Shuma: " << shuma << endl;

    return 0;
}

/* Detyra 4
    Te llogaritet prodhimi i numrave prej 1 deri ne n, ku vlera e n
    lexohet permes tastieres
*/
#include <iostream>

using namespace std;

int main()
{
    int n, prodhimi = 1, i = 1;
    cout << "Shkruani nje numer n:";
    cin >> n;

    while (i <= n)
    {
        if (i == n)
        {
            cout << i;
        }
        else
        {
            cout << i << " * ";
        }
        prodhimi = prodhimi * i;
        i++;
    }

    cout << " = " << prodhimi << endl;

    return 0;
}

/* Detyra 5
    Te llogaritet shuma e numrave prej 1 deri ne n, permes
    unazes do while
*/
#include <iostream>

using namespace std;


/* Detyra 6
    Te printohet rreshti i kodit permes unazes for
*/
#include <iostream>

using namespace std;

int main()
{

    cout << "Programi i pare" << endl;
    cout << "Programi i pare" << endl;
    cout << "Programi i pare" << endl;
    cout << "Programi i pare" << endl;
    cout << "Programi i pare" << endl;

    int i = 0;

    cout << "Pas unazes while: " << endl;
    while (i < 5)
    {
        cout << "Programi i pare" << endl;
        i++;
    }

    return 0;
}
/* Detyra 7
    Te printohet rreshti i kodit permes unazes for
*/
#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Programi i pare" << endl;
    }
    // i = 0 -> TRUE
    // i = 1 -> TRUE
    // i = 2 -> TRUE
    // i = 3 -> TRUE
    // i = 4 -> TRUE
    // i = 5 -> FALSE 

    return 0;
}

/* Detyra 8
    Te llogaritet shuma e numrave prej 1 deri ne n permes unazes for
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0, i = 1;

    cout << "Jepni vleren e n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        shuma += i;
        cout << "Vlera e variables i brenda unazes: " << i << endl;
    }

    cout << "Vlera e variables i: " << i << endl;

    cout << "Shuma = " << shuma << endl;

    return 0;
}

/* Detyra 9
    Te llogaritet shuma e numrave cift prej 1 deri ne n permes unazes for
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0;

    cout << "Jepni vleren e n: ";
    cin >> n;

    // n = 4 => i = 1, i = 2, i = 3, i = 4
    for (int i = 2; i <= n; i += 2)
    {
        // Menyra e pare
        // if (i % 2 == 0)
        // {
        //     shuma += i;
        // }

        shuma += i;
    }

    cout << "Shuma = " << shuma << endl;

    return 0;
}

/* Detyra 10
    Te llogaritet shuma e numrave cift prej 1 deri ne n permes unazes for
    duke perdorur komanden continue
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0;

    cout << "Jepni vleren e n: ";
    cin >> n;

    for (int i = 1; i <= n; i += 1)
    {
        if (i % 2 != 0)
        {
            cout << "Kalohet hapi, numri tek: " << i << endl;
            continue;
        }

        cout << "Numri cift: " << i << endl;
        shuma += i;
    }

    cout << "Shuma = " << shuma << endl;

    return 0;
}

/* Detyra 11
    Te llogaritet shuma e numrave cift prej 1 deri ne n permes unazes for
    duke perdorur komanden continue. Ne rast se shuma e numrave e tejkalon
    numrin 8, te perfundoj ekzekutimi i unazes
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0;

    cout << "Jepni vleren e n: ";
    cin >> n;

    for (int i = 1; i <= n; i += 1)
    {
        cout << "Numri: " << i << endl;
        if (i % 2 != 0)
        {
            cout << "Kalohet hapi.." << endl;
            continue;
        }

        cout << "Numri i shtohet shumes.." << endl;
        shuma += i;

        if (shuma >= 8)
        {
            cout << "Shuma e arritur eshte me e madhe ose barazi me 8. Unaza perfundoi.." << endl;
            break;
        }
    }

    cout << "Shuma = " << shuma << endl;

    return 0;
}

/* Detyra 12
    Te llogaritet shuma e numrave cift prej 1 deri ne n permes unazes for
    duke perdorur komanden continue. Ne rast se shuma e numrave e tejkalon
    numrin 8, te perfundoj ekzekutimi i unazes
*/
#include <iostream>

using namespace std;

int main()
{
    int n, shuma = 0;

    cout << "Jepni vleren e n: ";
    cin >> n;

    for (int i = 1; i <= n; i += 1)
    {
        cout << "Numri: " << i << endl;
        if (i % 2 != 0)
        {
            cout << "Kalohet hapi.." << endl;
            continue;
        }

        cout << "Numri i shtohet shumes.." << endl;
        shuma += i;

        if (shuma >= 8)
        {
            cout << "Shuma e arritur eshte me e madhe ose barazi me 8. Unaza perfundoi.." << endl;
            break;
        }
    }

    cout << "Shuma = " << shuma << endl;

    return 0;
}

/* Detyra 13
    Te llogaritet prodhimi i numrave prej a deri ne b, ku vlera e a dhe b
    percaktohet permes tastieres. Ne rast se prodhimi i arritur tejkalon vleren
    21, te perfundoj unaza. Po ashtu vlera 6 te mos futet ne kalkulim, nese ajo
    gjendet brenda rangut a dhe b.
*/
#include <iostream>

using namespace std;

int main()
{

    int i, a, b, prodhimi = 1;
    cout << "Sheno vleren per variablen a: ";
    cin >> a;
    cout << "Sheno vleren per variablen b: ";
    cin >> b;
    for (i = a; i <= b; i++)
    {
        cout << "Numri aktual: " << i << endl;
        if (i == 6)
        {
            cout << "i eshte e barabarte me 6, kaloje hapin." << endl;
            continue;
        }

        prodhimi *= i;

        if (prodhimi > 21)
        {
            cout << "Prodhimi ka tejkaluar vleren 21." << endl;
            break;
        }
    }
    cout << "Prodhimi: " << prodhimi << endl;
    return 0;
}

/* Detyra 14
    Te llogaritet shuma e numrave prej 1 deri ne n permes
    unazave while, do-while dhe for
*/
#include <iostream>

using namespace std;

int main()
{
    int i = 0, shuma = 0, n;

    cout << "Vlera e variables n: ";
    cin >> n;

    cout << "Shuma para unazes while: " << shuma << endl;
    cout << "Variabla i para fillimit te unazes while: " << i << endl; // 0
    while (i <= n)
    {
        cout << "Brenda unazes while, i = " << i << endl;
        shuma += i;
        i++;
    }

    cout << "Shuma prej unazes while: " << shuma << endl; // 10

    cout << "Shuma para unazes do while: " << shuma << endl;
    cout << "Variabla i para fillimit te unazes do-while: " << i << endl; // 4
    do
    {
        cout << "Brenda unazes do-while, i = " << i << endl;
        shuma += i;
        i++;
    } while (i <= n);

    cout << "Shuma prej unazes do while: " << shuma << endl; // 10

    cout << "Shuma para unazes for: " << shuma << endl;
    cout << "Variabla i para fillimit te unazes for: " << i << endl; // 5
    for (int i = 0; i <= n; i++)
    {
        cout << "Brenda unazes for, i = " << i << endl;
        shuma += i;
    }

    cout << "Shuma prej unazes for: " << shuma << endl; // 10

    return 0;
}

/* Detyra 15
    Te llogaritet shuma e numrave prej 1 deri ne n permes
    unazave while, do-while dhe for
*/
#include <iostream>

using namespace std;

int main()
{
    int i = 0, shuma = 0, n;

    cout << "Vlera e variables n: ";
    cin >> n;

    cout << "Shuma para unazes while: " << shuma << endl;
    cout << "Variabla i para fillimit te unazes while: " << i << endl; // 0
    while (i <= n)
    {
        cout << "Brenda unazes while, i = " << i << endl;
        shuma += i;
        i++;
    }

    cout << "Shuma prej unazes while: " << shuma << endl; // 10

    cout << "Shuma para unazes do while: " << shuma << endl;
    cout << "Variabla i para fillimit te unazes do-while: " << i << endl; // 5
    i = 0;
    shuma = 0;
    do
    {
        cout << "Brenda unazes do-while, i = " << i << endl;
        shuma += i;
        i++;
    } while (i <= n);

    cout << "Shuma prej unazes do while: " << shuma << endl; // 10

    cout << "Shuma para unazes for: " << shuma << endl;
    cout << "Variabla i para fillimit te unazes for: " << i << endl; // 5
    shuma = 0;
    for (int i = 0; i <= n; i++)
    {
        cout << "Brenda unazes for, i = " << i << endl;
        shuma += i;
    }

    cout << "Shuma prej unazes for: " << shuma << endl; // 10

    return 0;
}

/*  Detyra 16
    Të shkruhet programi i plotë (përfshirë ‘include’ dhe funksionin main)
    i cili lexon nga tastiera numrat e  plotë a, b, c.
    Të llogaritet shuma dhe prodhimi i vlerave të lexuara si dhe të
    paraqiten ekuivalentët oktal dhe heksadecimal të shumës dhe prodhimit të arritur.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int a, b, c, shuma, prodhimi;

    cout << "Vlera e variables a: ";
    cin >> a;
    cout << "Vlera e variables b: ";
    cin >> b;
    cout << "Vlera e variables c: ";
    cin >> c;

    shuma = a + b + c;
    prodhimi = a * b * c;

    cout << "Shuma: " << shuma << endl;
    cout << "Prodhimi: " << prodhimi << endl;

    cout << "Shuma ne sistemin oktal: " << oct << shuma << endl;
    cout << "Prodhimi ne sistemin oktal: " << oct << prodhimi << endl;

    cout << "Shuma ne sistemin heksadecimal: " << hex << shuma << endl;
    cout << "Prodhimi ne sistemin heksadecimal: " << hex << prodhimi << endl;

    return 0;
}

/*  Detyra 17
    Të lexohen 6 numra të plotë nga tastiera. Për secilin nga numrat të kontrollohet
    nëse është i plotpjesëtueshëm me 3, ashtu që në fund të dihet saktë numri i vlerave të
    lexuara të cilat plotpjesëtohen me numrin 3.
*/
#include <iostream>

using namespace std;

int main()
{
    int numri, plotepjestueshemMe3 = 0;

    for (int i = 0; i <= 5; i++)
    {
        cout << "Shenoni nje numer: ";
        cin >> numri;

        if (numri % 3 == 0)
        {
            plotepjestueshemMe3++;
        }
    }

    cout << "Nga 6 numrat e lexuar " << plotepjestueshemMe3 << " jane te plotepjestueshem me numrin 3." << endl;

    return 0;
}

/*  Detyra 18
    F = (4n - 2)! // 4! => 4 * 3 * 2 * 1
    P = 1 -> (4n -2) 1 * 2 * 3 * 4
*/
#include <iostream>

using namespace std;

int main()
{
    int n, faktoriel = 1;

    cout << "Vlera e n: ";
    cin >> n;

    for (int i = 1; i <= (4 * n - 2); i++)
    {
        cout << "Vlera e i: " << i << endl;
        faktoriel = faktoriel * i;
    }

    cout << "Faktorieli: " << faktoriel << endl;

    return 0;
}

