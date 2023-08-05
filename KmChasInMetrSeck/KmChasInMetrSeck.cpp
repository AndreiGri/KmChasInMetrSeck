#include <iostream>
#include <cstdlib>

using namespace std;

double KmChasInMetrSeck(int sp) {
    double speedMetrInSeck = (double)sp * 1000 / 60 / 60;
    return speedMetrInSeck;
}

int main()
{
    system("chcp 1251 > nul");
    double speed;
    cout << "Введите скорость транспортного средства в километрах в час: ";
    cin >> speed;
    cout << "Скорость транспортного средства " << KmChasInMetrSeck(speed) << " метров в секунду!" << endl;
    system("pause > nul");
    return 0;
}
