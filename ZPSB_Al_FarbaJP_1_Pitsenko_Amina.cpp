#include<iostream>
#include<cmath>
using namespace std;


const float farba = 1.25;

int main(){
	float a, b, c, z;
	float szerokosc = 0.9;
	int wys_okna = 1, wys_drzwi = 2, x, y;
			cout<<"Obliczanie liczby puszek farby do pomalowania scian pokoju\n";
			cout<<"Podaj dlugosc pomieszczenia w metrach: ";
				cin>>a;
			cout<<"Podaj szerokosc pomieszczenia w metrach: ";
				cin>>b;
			cout<<"Podaj wysokosc pomieszczenia w metrach: ";
				cin>>c;
			cout<<"Wydajnosc farby mkw/l: ";
				cin>>z;	
	int d=a*30/100; 
	int d1=b*30/100;

		if(d<szerokosc && d1<szerokosc){
			cout<<"Pomieszczenie jest za male!";
		}
		else {
			float ilosc=((d)/szerokosc)*2;
			float ilosc1=((d1)/szerokosc)*2;
			int suma_el=ilosc+ilosc1;
		
				if(suma_el>=5){
					y=2;
					x=3;
				}
				else if(suma_el==4){
					y=1;
					x=3;
				}
				else if(suma_el==3){
					y=1;
					x=2;
				}
				else if(suma_el==2){
					y=1;
					x=1;
				}
				else if(suma_el==1){
					y=1;
					x=0;
				}
				cout<<"Liczba drzwi: "<<y<<endl;
				cout<<"Liczba okien: "<<x<<endl;
		
			float s_x = x*(szerokosc*wys_okna);
			float s_y = y*(szerokosc*wys_drzwi);
			float s_pomeszczenia =  2*(a*c)+2*(b*c);
			float do_pomalowania = s_pomeszczenia - (s_x + s_y);
			float litry_farby = do_pomalowania/z;
			
			int puszki = ceil(litry_farby/farba);	
				cout<<"Do pomalowania pomieszczenia trzeba kupic "<<puszki<<" puszki farby";		
		}		
return 0;
}
