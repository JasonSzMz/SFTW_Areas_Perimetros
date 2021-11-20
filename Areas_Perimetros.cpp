#include <iostream> //input Output Stream
#include <iomanip>

using namespace std;

int main() //Muestra proceso principal
{
    system("cls");
    int optionFg = 0, optionOp = 0;
    string backToMenu;
    float globalData = 0.0, globalDataT, globalDataT2, resOp, pi = 3.1416;

    printf("\nCalculador de Areas y Per%cmetros\n\n", 1161);
    printf("Para selecionar una opci%cn de los men%cs, introduce el numero de la acci%cn que deseas realizar\n\n", 162, 163, 162);
    printf("Men%c\n\n1.-Cuadrado\n2.-Circulo\n3.-Triangulo\n\nFigura a calcular: ", 163);
    cin >> optionFg;

    switch (optionFg)
    {
    case 1:
        printf("\n%cQu%c desea calcular?\n\n1.-Area\n2.-Per%cmetro\nOperacion a realizar: ", 168, 130, 161);
        cin >> optionOp;
        printf("\n\nIngresa la medida de un lado del cuadrado: ");
        cin >> globalData;
        if (globalData == 0)
        {
            printf("\n\nRevisa tus medidas");
        }
        else
        {
            if (optionOp == 1)
            {
                printf("\nFormula: Lado*Lado");
                resOp = (globalData * globalData);
            }
            else if (optionOp == 2)
            {
                printf("\nFormula: Lado*4");
                resOp = (globalData * 4);
            }
        }

        break;
    case 2:
        printf("\n%cQu%c desea calcular?\n\n1.-Area\n2.-Per%cmetro\nOperacion a realizar: ", 168, 130, 161);
        cin >> optionOp;
        printf("\n\nIngresa la medida de radio: ");
        cin >> globalData;
        if (globalData == 0)
        {
            printf("\n\nRevisa tus medidas");
        }
        else
        {
            if (optionOp == 1)
            {
                printf("\nFormula: %c*r%c", 227, 253);
                resOp = pi * (globalData * globalData);
            }
            else if (optionOp == 2)
            {
                printf("\nFormula: %c*d", 227, 253);
                resOp = pi * (globalData * 2);
            }
        }

        break;
    case 3:
        printf("\n%cQu%c desea calcular?\n\n1.-Area\n2.-Per%cmetro\nOperacion a realizar: ", 168, 130, 161);
        cin >> optionOp;
        if (optionOp == 1)
        {
            printf("\nIngresa la medida de la base del triangulo: ");
            cin >> globalData;
            printf("\nIngresa la altura del triangulo: ");
            cin >> globalDataT;
            if (globalData == 0 || globalDataT == 0)
            {
                printf("\n\nRevisa tus medidas");
            }
            else
            {
                resOp = (globalDataT * globalData) / 2;
            }
        }
        else if (optionOp == 2)
        {
            printf("\n\nIngresa el lado 'a' del triangulo: ");
            cin >> globalData;
            printf("\nIngresa el lado 'b' del triangulo: ");
            cin >> globalDataT;
            printf("\nIngresa el lado 'c' del triangulo: ");
            cin >> globalDataT2;
            if (globalData == 0 || globalDataT == 0 || globalDataT2 == 0)
            {
                printf("\n\nRevisa tus medidas");
            }
            else
            {
                resOp = globalDataT2 + globalDataT + globalData;
            }
        }

        break;
    default:

        break;
    }
    if (optionOp == 1)
    {
        cout << "\n\nArea = " << fixed << setprecision(2) << resOp << "\n\n";
        printf("%cRegresar al men%c  S/N? ", 168, 163);
        cin >> backToMenu;
        if (backToMenu == "s" || backToMenu == "S" || backToMenu == "si" || backToMenu == "SI" || backToMenu == "Si")
        {
            system("Areas_Perimetros");
        }
    }
    else if (optionOp == 2)
    {
        cout << "\n\nPerimetro = " << fixed << setprecision(2) << resOp << "\n\n";
        printf("%cRegresar al men%c  S/N? ", 168, 163);
        cin >> backToMenu;
        if (backToMenu == "s" || backToMenu == "S" || backToMenu == "si" || backToMenu == "SI" || backToMenu == "Si")
        {
            system("Areas_Perimetros");
        }
    }
}
