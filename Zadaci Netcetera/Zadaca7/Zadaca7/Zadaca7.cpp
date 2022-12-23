//Andrej Tosheski INKI932

#include <iostream>
using namespace std;

//Inicijaliziranje na promenlivi
const int N = 10;
int r;
int k;
int n;
int m;

//Struktura
struct ArrStruct
{
    int matrix[N][N];
};

struct ArrStruct2
{
    int matrix2[N][N];
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

ArrStruct2 VnesiMatrica2()
{
    //Vnesuvanje na matrica
    ArrStruct2 arr;
vnesiPovtorno:;
    cout << "Vnesi redici i koloni na matrica 2 > 0 && < 11" << endl;
    cin >> n >> m;

    if (n < 11 && m < 11 && n > 0 && m > 0)
    {
        cout << "\nVnesi gi elementite vo matricata: " << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "Vnesi element " << i + 1 << j + 1 << ": ";
                cin >> arr.matrix2[i][j];
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

void PecatiMatrica2(ArrStruct2 arr)
{
    //Pecatenje na matricata
    cout << "\nMatrica2:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr.matrix2[i][j] << " ";
        }
        cout << endl;
    }
}

void DaliSeEdnakvi(ArrStruct arr, ArrStruct2 arr2)
{  
    //Proveruvanje dali matricite se ednakvi ili ne
    if (r != n || k != m)
    {
        cout << "\nMatricite ne se ednakvi, nemaat ist broj na redici || koloni" << endl;
    }
    else
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr.matrix[i][j] != arr2.matrix2[i][j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "\nMatricite se ednakvi" << endl;
        }
        else
        {
            cout << "\nMatricite ne se ednakvi" << endl;
        }
    }
}

int main()
{
    //Povikuvanje na funkciite
    ArrStruct arr;
    ArrStruct2 arr2;
    arr = VnesiMatrica();
    arr2 = VnesiMatrica2();
    PecatiMatrica(arr);
    PecatiMatrica2(arr2);
    DaliSeEdnakvi(arr, arr2);
}