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
    //Vnesuvanje na matrica (Funckija 1)
    ArrStruct arr;
vnesiPovtorno:;
    cout << "Vnesi redici i koloni na matrica > 0 && < 10" << endl;
    cin >> r >> k;

    if (r < 10 && k < 10 && r > 0 && k > 0)
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
    //Pecatenje na zadadenata matrica (Funkcija 2)
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

void MaxVrednost(ArrStruct arr)
{
    //Baranje na maksimalna vrednost vo matricata i pozicija (Funkcija 3)
    int max = arr.matrix[0][0];
    string pos;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr.matrix[i][j] > max)
            {
                max = arr.matrix[i][j];
                pos = to_string(i+1) + to_string(j+1);
            }
        }       
    }

    cout << "\nNajgolem e elementot: " << max << ", so pozicija: " << pos << endl;
}

void MinVrednost(ArrStruct arr)
{
    //Baranje na minimalna vrednost vo matricata i pozicija (Funkcija 4)
    int min = arr.matrix[0][0];
    string pos;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr.matrix[i][j] < min)
            {
                min = arr.matrix[i][j];
                pos = to_string(i + 1) + to_string(j + 1);
            }
        }
    }

    cout << "\nNajmal e elementot: " << min << ", so pozicija: " << pos << endl;
}

void SumaMatrica(ArrStruct arr)
{
    //Presmetuvanje na sumata na site elementi od matricata (Funkcija 5)
    int suma = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            suma += arr.matrix[i][j];
        }
    }

    cout << "\nSumata na site elementi od matricata e: " << suma << endl;
}

void ProsecnaVrednost(ArrStruct arr)
{
    //Presmetuvanje na prosecnata vrednost na site elementi od matricata (Funkcija 6)
    float prosek;
    float vkupnoElementi = r * k;
    float suma = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            suma += arr.matrix[i][j];
        }
    }

    prosek = suma / vkupnoElementi;

    cout << "\nProsecnata vrednost na site elementi od matricata e: " << prosek << endl;
}

int main()
{
    //Povikuvanje na funkciite
    ArrStruct arr;
    arr = VnesiMatrica();
    PecatiMatrica(arr);
    MaxVrednost(arr); 
    MinVrednost(arr);
    SumaMatrica(arr);
    ProsecnaVrednost(arr);
}

