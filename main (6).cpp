#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double sueldoMensual, sueldoAnual, isr = 0;

    cout << "===== CALCULO DE ISR =====" << endl;
    cout << "Ingrese el sueldo mensual: RD$ ";
    cin >> sueldoMensual;

    sueldoAnual = sueldoMensual * 12;

    if (sueldoAnual <= 416220.00)
    {
        isr = 0;
    }
    else if (sueldoAnual <= 624329.00)
    {
        isr = (sueldoAnual - 416220.00) * 0.15;
    }
    else if (sueldoAnual <= 867123.00)
    {
        isr = 31216.00 + ((sueldoAnual - 624329.00) * 0.20);
    }
    else
    {
        isr = 79776.00 + ((sueldoAnual - 867123.00) * 0.25);
    }

    cout << fixed << setprecision(2);

    cout << "\nRESULTADOS" << endl;
    cout << "Sueldo mensual: RD$ " << sueldoMensual << endl;
    cout << "Sueldo anual:   RD$ " << sueldoAnual << endl;
    cout << "ISR anual:      RD$ " << isr << endl;

    return 0;
}