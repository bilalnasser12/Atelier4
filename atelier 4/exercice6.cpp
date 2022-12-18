#include <iostream>  
#include <exception>
 using namespace std; 
  class Test{ 
  public:  
  static int tableau[] ;
   public : 
   static int division(int indice, int diviseur){  
        if( diviseur== 0 ) { throw "Attempted to divide by zero!"; }      // si le denominateur est egal a 0 on affiche une serte d alert par 'throw'
        return tableau[indice]/diviseur;     } };   // sinon on affiche le resultat normalement 
		int Test::tableau[] =  {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
	
	
	
	class MyException : public Test{               //creation d une classe myexeption  qui derive de la classe test 
	public: const char * what() 
	        const throw()        
	{ return "Attempted to divide by zero!\n"; } }; //surcharge de throw

    int main()   {
	try {
 
	int x, y;          //dans le main on utilisetry catch pour detecter les erreurs 
	cout << "Entrez l'indice de l'entier a diviser: " << endl;  
	cin >> x ;
	 cout << "Entrez le diviseur: " << endl;   
	 cin >> y ; 
	 if (y == 0) { MyException z; throw z; }   
	 else {
	 	cout << "Le resultat de la division est: "<< endl;   
	 cout <<Test::division(x,y) << endl;   	} 
	 }
	 catch(exception& e) { cout << e.what(); } 
 }
