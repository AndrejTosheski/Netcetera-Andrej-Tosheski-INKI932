//Andrej Tosheski INKI932

#include <iostream>
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

void Duplikati(ArrStruct arr)
{
    //Otstranuvanje na duplikati (Duplikatite se zamenuvaat so -1)
    bool duplikat[N][N];

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < k; j++) 
        {
            int temp = arr.matrix[i][j];

            for (int b = 0; b < r; b++) 
            {                
                for (int a = 0; a < k; a++)
                {
                    if (i == b && j == a)
                        continue;
                    if (temp == arr.matrix[b][a]) {
                        duplikat[i][j] = true;
                        duplikat[b][a] = false;
                    }
                }
            }        
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (!duplikat[i][j])
            {
                arr.matrix[i][j] = -1;
            }
        }
    }       
    cout << "\nNovata matrica Izgleda vaka:";
    PecatiMatrica(arr);
}

int main()
{
    //Povikuvanje na funkciite
    ArrStruct arr;
    arr = VnesiMatrica();
    PecatiMatrica(arr);
    Duplikati(arr);
}

