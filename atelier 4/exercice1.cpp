#include <iostream>
using namespace std ;
 class complex {
public :
	 int choix,rel,img;
       complex(){} // definition d un constructeur
       complex(int R,int I){
       rel=R; //initialisation des valeurs
       img=I;
       }
       complex operator+(complex a)//surcharge d'operateur pour laddition
       {
       complex s;   //creation d un objet danslequel on va stoquer la sommes de sreeles et imaginaires
        s.rel = rel + a.rel;
        s.img = img + a.img;
        return s;  // s return la valeur de l addition
    }
       complex operator-(complex a)  //surcharge d'operateur pour la soustraction
    {
       complex s;
        s.rel = rel - a.rel;
        s.img = img - a.img;
        return s;
    }
       complex operator*(complex a) //surcharge d'operateur pour la multiplication
    {
        complex p;
        p.rel = rel * a.rel - img * a.img;
        p.img = rel * a.img + img * a.rel;
        return p; //return le resultat de la multiplication
    }
    complex operator / (complex a){  //surcharge d'operateur pour la division

			complex d;
			d.img=rel/a.rel;
			d.rel=img/a.img;
			return d;  // return la valeur de la division
		}


};
int main(){
  int R1,R2,I1,I2,choix;            //l utilisateur entre les valeurs des pariles reels et imaginaire des deux complexes
        cout << "la partie imaginaire du premier complexe"<<endl;
        cin >> I1 ;
        cout << "la partie reele du premier complexe"<<endl;
        cin >> R1 ;
        cout << "complex 1: "  << R1<< "+" << I1 <<"*i"<< endl;  //affichage de complex1
        cout << "la partie imaginaire du deuxieme complexe"<<endl;
        cin >> I2 ;
        cout << "la partie reele du deuxieme complexe"<<endl;
        cin >> R2 ;
        cout << "complex 2: "  << R2<< "+" << I2 <<"*i"<< endl; //affichage de complexe 2
complex c1(R1,I1);
complex a(R2,I2);
complex c3 = c1 + a;
complex c4 = c1 - a;
complex c5 = c1 * a;
complex c6 = c1 / a;
        cout << "veuillez choisir une operation du menu suivant :"<<endl;   //affichage du menu
            string menu[4];
        menu[0] = "1. +" ;
        menu[1] = "2. -";
        menu[2] = "3. * ";
        menu[3] = "4. / ";
        for(int i(0); i<4; ++i)
        { cout << menu[i] << endl;}
        cin >> choix ;
    if (choix == 1 ){                 //selon le choix de l utilisateur on appel l opperateur de l operation choisie
       cout << "SOMME EST : " <<c3.rel<< " + i* " << c3.img << endl;   }   //affichage de chaque resultat
       else if (choix == 2){
       cout << "SOUSTRACTION EST : " <<c4.rel<< " + i* " <<c4.img<< endl;}
       else if (choix == 3){
       cout << "PRODUIT EST : " << c5.rel<< " + i* " << c4.img << endl;}
       else{
       cout << "LA DIVISION EST : " << c6.rel<< " + i* " << c6.img<< endl;}
    return 0;
}

