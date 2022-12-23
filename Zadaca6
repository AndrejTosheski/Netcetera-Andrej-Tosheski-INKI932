//Andrej Tosheski INKI932

#include <iostream>
#include <vector>
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

void RasteckiOpagjacki(ArrStruct arr)
{
    //Proveruvanje na kolonite i redicite
    vector<int> broevi;  
    vector<int> broevi2;

    //Vnesuvanje na broevite od sekoja redica vo vector (broevi == redici)
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
            broevi.push_back(arr.matrix[i][j]);
        }
    }

    //Vnesuvanje na broevite od sekoja kolona vo vector (broevi2 == koloni)
    int koloni = k;
    int indeks = 0;
    while (koloni != 0)
    {
        for (int i = indeks; i < broevi.size(); i += k)
        {
            broevi2.push_back(broevi[i]);
        }
        koloni--;
        indeks++;
    }

    //Proveruvanje dali redicite se rastecki, opagjacki ili nitu rastecki nitu opagjacki
    int brojac = 1;
    int brojacop = 1;
    int brojac2 = k;
    int red = 0;
    for (int i = 0; i < broevi.size(); i = i + k)
    {
        int ind = i;
        brojac2 = k;
        red++;
        brojac = 1;
        brojacop = 1;
        bool flag = false;
        
        while (brojac2 != 0)
        {
            if (brojac2 - 1 == 0)
            {              
                break;
            }
            if (broevi[i] < broevi[i + 1])
            {
                brojac++;
            }
            if (broevi[i] > broevi[i + 1])
            {
                brojacop++;
            }
            if (brojac == k)
            {
                cout << "Redica " << red << " e rastecka" << endl;
                brojac = 1;
                flag = true;
            }
            if (brojacop == k)
            {
                cout << "Redica " << red << " e opagjacka" << endl;
                brojacop = 1;
                flag = true;
            }
            i++;
            brojac2--;
        }
        if (!flag)
        {
            cout << "Redica " << red << " e nitu rastecka nitu opagjacka" << endl;
        }
        i = ind;
    }  

    //Proveruvanje dali kolonite se rastecki, opagjacki ili nitu rastecki nitu opagjacki
    brojac = 1;
    brojacop = 1;
    brojac2 = r;
    int kol = 0;
    for (int i = 0; i < broevi2.size(); i = i + r)
    {
        int ind = i;
        brojac2 = r;
        kol++;
        brojac = 1;
        brojacop = 1;
        bool flag = false;
        
        while (brojac2 != 0)
        {
            if (brojac2 - 1 == 0)
            {
                break;
            }
            if (broevi2[i] < broevi2[i + 1])
            {
                brojac++;
            }
            if (broevi2[i] > broevi2[i + 1])
            {
                brojacop++;
            }
            if (brojac == r)
            {
                cout << "Kolonata " << kol << " e rastecka" << endl;
                brojac = 1;
                flag = true;
            }
            if (brojacop == r)
            {
                cout << "Kolonata " << kol << " e opagjacka" << endl;
                brojacop = 1;
                flag = true;
            }
            i++;
            brojac2--;
        }
        if (!flag)
        {
            cout << "Kolonata " << kol << " e nitu rastecka nitu opagjacka" << endl;
        }
        i = ind;
    }
    
}

int main()
{
    //Povikuvanje na funkciite
    ArrStruct arr;
    arr = VnesiMatrica();
    PecatiMatrica(arr);
    RasteckiOpagjacki(arr);
}

