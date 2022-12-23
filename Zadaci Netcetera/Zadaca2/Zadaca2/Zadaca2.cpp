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

void PromenaNaMestata(ArrStruct arr)
{
    //Promena na mestata na minimalnata i maksimalnata vrednost vo matricata
    int max = arr.matrix[0][0];
    int min = arr.matrix[0][0];
    int pos1 = 0, pos2 = 0, pos3 = 0, pos4 = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr.matrix[i][j] > max)
            {
                max = arr.matrix[i][j];
                pos1 = i;
                pos2 = j;
            }
            if (arr.matrix[i][j] < min)
            {
                min = arr.matrix[i][j];
                pos3 = i;
                pos4 = j;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i == pos1 && j == pos2)
            {
                arr.matrix[i][j] = min;
            }
            if (i == pos3 && j == pos4)
            {
                arr.matrix[i][j] = max;
            }
        }
    }
    cout << "\nNovata matrica so promena na mestata e:" << endl;
    PecatiMatrica(arr);
}

int main()
{
    //Povikuvanje na funkciite
    ArrStruct arr;
    arr = VnesiMatrica();
    PecatiMatrica(arr);   
    PromenaNaMestata(arr);
}

