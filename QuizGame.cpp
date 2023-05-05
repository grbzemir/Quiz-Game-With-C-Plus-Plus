#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    
    system("color 3F");
    string Sorular[10] = {


        "1. Turkiye'nin Baskenti neresidir?",
        "2. Unlu fast food restoranı sirketi Burger King hangi ulkeye ait",
        "3. Milli Istihbarat Teskilatini Osmanli Donemindeki Adi Nedir?",
        "4. Ay'a Ayak Basan Ilk Insan Kimidir?",
        "5. Amerikanin Baskenti Neresidir?",
        "6. Dunyanin En Buyuk Okyanusu Nedir?",
        "7. Dunyanin En Buyuk Denizi Nedir?",
        "8. Dunyanin En Buyuk Heykeli Nedir?",
        "9. Dunyanin En Buyuk Nehri Nedir?",
        "10.OrtaDogunun En Guclu Devleti Kimdir?",

    };


    string sikklar[10][4] = { // 10 soru 4 sık !

        
        {"Istanbul" , "Ankara" , "Erzurum" , "Yalova"},
        {"Ingiltere" , "Turkiye" , "Amerika" , "Rusya"},
        {"Teskilat-i Mahsusa" , "Emniyet Genel Mudurlugu" , "Jandarama" , "Konya"},
        {"neil armstrong" , "Yuri Gagari" , "Emircan Gurbuz" , "Servet Sayar"},
        {"Washington" , "New York" , "Los Angeles" , "Chicago"},
        {"Kuzey denizi" , "Pasifik" , "Kaspian Denizi" , "Buyuk Okyanus"},
        {"Amazon" , "Kuzey Denizi" , "Karadeniz" , "Akdeniz"},
        {"Ozgurluk Heykeli" , "Kolossus" , "Nil Heykeli" , "Mars"},
        {"Nile" , "Amazon" , "Missisipi" , "Volga"},
        {"Roma" , "Bizans" , "Osmanli" , "Pers"},
        

    };

    string cevaplar[10] = {

        "Ankara",
        "Amerika",
        "Teskilat-i Mahsusa",
        "neil armstrong",
        "Washington",
        "Pasifik",
        "Kuzey denizi",
        "Kolossus",
        "Amazon",
        "Osmanli",

    };

    int kullanici[10] = {0,0,0,0,0,0,0,0,0,0};
    int toplamSoru = 10;
    int dogru;

    for(int i=0; i<toplamSoru;i++)

    {

        cout<<"Sorular #"<<(i+1)<<endl;
        cout<<Sorular[i]<<endl;
        cout<<"1. "<<sikklar[i][0]<<endl;
        cout<<"2. "<<sikklar[i][1]<<endl;
        cout<<"3. "<<sikklar[i][2]<<endl;
        cout<<"4. "<<sikklar[i][3]<<endl;

        cout<<"Cevabiniz (1-4): ";
        cin>>kullanici[i];
        cout<<"---------------------------------"<<endl;

    }

    cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Dogru Secenekler======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

     for(int i=0; i<toplamSoru;i++)

     {

        cout<<"Sorular #"<<(i+1)<<endl;
        cout<<Sorular[i]<<endl;
        cout<<"1. "<<sikklar[i][0]<<endl;
        cout<<"2. "<<sikklar[i][1]<<endl;
        cout<<"3. "<<sikklar[i][2]<<endl;
        cout<<"4. "<<sikklar[i][3]<<endl;

        if(kullanici[i] == 0)

        {

            cout<<"Cevabiniz: "<<endl;

        }

        else

        {

            cout<<"Cevabiniz: "<<sikklar[i][kullanici[i]-1]<<endl;

            
        }

        cout<<"Dogru Cevap: "<<cevaplar[i]<<endl;

        cout<<"Devam etmek icin bir tusa basiniz..."<<endl;
        getch();
        cout<<"---------------------------------"<<endl;


     }


    cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Sonuc      ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

    int Dogru=0;
    int yanlis=0;
    int bos=0;

    for(int i=0; i<toplamSoru;i++)

    {

        if(kullanici[i] != 0)

        {

            if(sikklar[i][kullanici[i]-1] == cevaplar[i])

            {

                Dogru++;

            }

            else

            {

                yanlis++;

            }

        }

        else

        {

            bos++;

        }

    }

    cout<<"Toplam Soru: "<<toplamSoru<<endl;
    cout<<"Dogru Cevap: "<<Dogru<<endl;
    cout<<"Yanlis Cevap: "<<yanlis<<endl;
    cout<<"Bos Cevap: "<<bos<<endl;

    getch();

 return 0;


}