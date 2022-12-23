//Andrej Tosheski INKI932

#include <iostream>
#include <string>
using namespace std;

//Inicijaliziranje na promenlivi
const int N = 10;
int r;
int k;

//Struktura
struct ArrStruct
{
    int matrix[N][N];
};

ArrStruct VnesiMatrica()
{
    //Vnesuvanje na matrica
    ArrStruct arr;
vnesiPovtorno:;
    cout << "Vnesi redici i koloni na matrica > 0 && < 11" << endl;
    cin >> r >> k;

    if (r < 11 && k < 11 && r > 0 && k > 0)
    {
        cout << "\nVnesi gi elementite vo matricata: " << endl;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cout << "Vnesi element " << i + 1 << j + 1 << ": ";
                cin >> arr.matrix[i][j];
            }
        }

        return arr;
    }
    else
    {
        goto vnesiPovtorno;
    }
}

void PecatiMatrica(ArrStruct arr)
{
    //Pecatenje na matricata
    cout << "\nMatrica:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << arr.matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Transformacija(ArrStruct arr)
{
    //Transformiranje na matricata
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int desetka = (arr.matrix[i][j] / 10) % 10;
            arr.matrix[i][j] = desetka;
        }
    }
    cout << "\nNovata transformirana matrica e:" << endl;
    PecatiMatrica(arr);
}

int main()
{
    //Povikuvanje na funkciite
    ArrStruct arr;
    arr = VnesiMatrica();
    PecatiMatrica(arr); 
    Transformacija(arr);
}

