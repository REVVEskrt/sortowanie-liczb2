#include <iostream>

using namespace std;

void wartpocz(int tab[], int rozmiar)
{
    for(int i=0; i < rozmiar; i++)
    {
        cout << "Podaj " << i << " element   ";
        cin >> tab[i];
    }

}

void pisz(int tab[],int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
        cout << tab[i] << "  ";
    cout << endl;
}

int main()
{
    int tablica[5];
    int rozmiar=5;
    int pozycja;
    wartpocz(tablica,5);
    int najm;

    najm=tablica[0];
    pozycja=0;
    int i=0;
    int j=0;
    int rob=0;


    for(i=0;i<rozmiar;i++)
	{		
		for(j=i+1;j<rozmiar;j++)
		{
			if(tablica[i]>tablica[j])
			{
				rob=tablica[i];
				tablica[i]=tablica[j];
				tablica[j]=rob;
			}
		}
	}


    swap(tablica[0],tablica[pozycja]);
    pisz(tablica,5);



    return 0;
}
