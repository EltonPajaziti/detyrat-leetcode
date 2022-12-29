/*
    Detyra 1 - Leximi i vlerave nga tastiera
*/

int main()
{
    int a = 5;
    cout << "Vlera fillestare e variables a: " << a << endl;
    cout << "Shenoni vleren e variables a: ";
    cin >> a;

    cout << "Vlera e lexuar per variablen a: " << a << endl;
}

/*
    Detyra 2 - Mbledhja e numrave
*/

int main()
{
    // Menyra e pare
    int a = 2, b = 3, c = 5, rezultati = 0;
    rezultati = a + b + c;
    cout << "Shuma sipas menyres se pare: " << rezultati << endl;

    // Menyra e dyte
    cout << "Vlera e variables a: ";
    cin >> a;
    cout << "Vlera e variables b: ";
    cin >> b;
    cout << "Vlera e variables c: ";
    cin >> c;

    rezultati = a + b + c;

    cout << "Shuma sipas menyres se dyte: " << rezultati << endl;

    // Menyra e trete
    int d, s = 0;

    cout << "1. Vlera e variables d: ";
    cin >> d;

    s += d; // s = s + d
    cout << "Shuma pas hapit te pare: " << s << endl;

    cout << "2. Vlera e variables d: ";
    cin >> d;

    s = s + d;
    cout << "Shuma pas hapit te dyte: " << s << endl;

    cout << "3. Vlera e variables d: ";
    cin >> d;

    s = s + d;

    cout << "Shuma finale: " << s << endl;

    return 0;
}

/*
    Detyra 4 - Syprina dhe perimetri i rrethit me konstanten PI
*/

#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14;

    int rrezja;

    cout << "Shenoni vleren e rrezes: ";
    cin >> rrezja;

    double syprina = 2 * PI * rrezja;
    double perimetri = PI * rrezja * rrezja;

    cout << "Syprina e rrethit me rreze " << rrezja << " eshte: " << syprina << "." << endl;
    cout << "Perimetri i rrethit me rreze " << rrezja << " eshte: " << perimetri << "." << endl;

    return 0;
}

/*
    Detyra 5 - Shuma, prodhimi dhe mesatarja e tre numrave
    te lexuar permes tastieres
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, shuma = 0;
    double mesatarja = 0;

    cout << "Shenoni vleren e a: ";
    cin >> a;
    cout << "Shenoni vleren e b: ";
    cin >> b;
    cout << "Shenoni vleren e c: ";
    cin >> c;

    shuma = a + b + c;
    // mesatarja = (a + b + c) / 3;
    // mesatarja = shuma / 3.0;
    mesatarja = shuma / (double)3;

    cout << "Shuma: " << shuma << endl;
    cout << "Mesatarja: " << mesatarja << endl;

    return 0;
}

/*
    Detyra 6 - Shkembimi i vlerave mes dy variablave
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Shenoni vleren e a: ";
    cin >> a;
    cout << "Shenoni vleren e b: ";
    cin >> b;

    cout << "Para shkembimit" << endl
         << "a: " << a << endl
         << "b: " << b << endl;

    int c = a;
    a = b;
    b = c;

    cout << "Pas shkembimit" << endl
         << "a: " << a << endl
         << "b: " << b << endl;

    return 0;
}