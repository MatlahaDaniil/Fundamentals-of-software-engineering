#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int m = 10, h = 5, v = 4;
    float e, p, g = 9.80665f;

    cout << "\t\t\tЗастосунок для обчислення кінетичної та потенціальної енергії\n";
    cout << "массa m = " << m << endl;
    cout << "висотa h = " << h << endl;
    cout << "швидкість v = " << v << endl << endl;

    e = (m * pow(v, 2)) / 2;
    p = m * g * h;

    cout << "Кінетична енергія: " << e << "Дж\n";
    cout << "Потенційна енергія: " << p << "Дж\n";


      //SetConsoleCP(1251);
      //SetConsoleOutputCP(1251);

      //int m, h, v;
      //float e, p, g = 9.80665f;

      //cout << "\t\t\tЗастосунок для обчислення кінетичної та потенціальної енергії\n";
      //cout << "Введіть массу\nm = ";
      //cin >> m;
      //cout << endl;
      //cout << "Введіть висоту\nh = ";
      //cin >> h;
      //cout << endl;
      //cout << "Введіть швидкість\nv = ";
      //cin >> v;
      //cout << endl;
      //cout << endl;

      //e = (m * pow(v, 2)) / 2;
      //p = m * g * h;

      //cout << "Кінетична енергія: " << e << "Дж\n";
      //cout << "Потенційна енергія: " << p << "Дж\n";
      

   /* SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int m = 10, h = 5, v = 4;
    float e, p, g = 9.80665f;

    printf("\t\t\tЗастосунок для обчислення кінетичної та потенціальної енергії\n");
    printf("массa m = %u\n", m);
    printf("висотa h = %u\n", h);
    printf("швидкість v = %u\n\n", v);

    e = (m * pow(v, 2)) / 2;
    p = m * g * h;

    printf("Кінетична енергія: %f Дж\n", e);
    printf("Потенційна енергія: %f Дж\n", p);*/

     /* SetConsoleCP(1251);
      SetConsoleOutputCP(1251);

      int m, h, v;
      float e, p, g = 9.80665f;

      printf("\t\t\tЗастосунок для обчислення кінетичної та потенціальної енергії\n");
      printf("Введіть массу\nm = ");
      scanf_s("%u",&m);
      printf("\n");
      printf("Введіть висоту\nh = ");
      scanf_s("%u", &h);
      printf("\n");
      printf("Введіть швидкість\nv = ");
      scanf_s("%u", &v);
      printf("\n");
      printf("\n");

      e = (m * pow(v, 2)) / 2;
      p = m * g * h;

      printf("Кінетична енергія: %f Дж\n", e);
      printf("Потенційна енергія: %f Дж\n", p);*/
}