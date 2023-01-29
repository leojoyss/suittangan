#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

// Menu Class
class Menu {
	
	public: 
		void menu(){
			cout << "============================================" << endl;
			cout << "   Selamat datang di game Suit Tangan" << endl;
			cout << "============================================" << endl;
		}
		
		void listMenu(){
			cout << "1. Gunting" << endl;
			cout << "2. Kertas" << endl;
			cout << "3. Batu" << endl;
			cout << "4. Keluar" << endl;
		}
};

// Logika
class Pertempuran{
	public:
		void serang( int pilihan ){
			/*
				1 = gunting
				2 = kertas
				3 = batu
			*/
			this->hasil(pilihan, this->randInt());
		}	
		 
		int randInt(){
			srand(time(0));
			return rand() % 3 + 1;	
		}
		
		void hasil( int player, int bot ){
			cout << "Pilihan Bot adalah : " << bot << endl;
			cout << "================================" << endl;
			cout << "Hasil " << endl;
			cout << "Anda : ";
			// jika player gunting
			if ( player == 1 ) {
				// draw
				if ( bot == 1 ) {
					cout << "Draw" << endl;
				}
				// menang
				if ( bot == 2 ) {
					cout << "Menang" << endl;
				}
				// kalah
				if ( bot == 3 ) {
					cout << "Kalah" << endl;
				}
			}
			
			// jika player kertas
			if ( player == 2 ) {
				// kalah
				if ( bot == 1 ) {
					cout << "Kalah" << endl;
				}
				
				// draw 
				if ( bot == 2 ) {
					cout << "Draw" << endl;
				}
				
				// menang
				if ( bot == 3 ) {
					cout << "Menang" << endl;
				}
			}
			
			// jika player batu
			if ( player == 3 ) {
				if ( bot == 1 ) {
					cout << "Menang" << endl;
				}
				
				if ( bot == 2 ) {
					cout << "Kalah" << endl;
				}
				
				if ( bot == 3 ) {
					cout << "Draw" << endl;
				}
			}

			cout << "================================" << endl;
		}
};


int main() {
	Menu menu;
	menu.menu();
	menu.listMenu();
	
	Pertempuran tempur;
	int pilihan = 0;
	
	while( true ){
		if ( pilihan == 4 ) {
			cout << "Selamat Tinggal !";
			return 0;
		}else {
			cout << "Masukan Pilihan : ";
			cin >> pilihan;
			tempur.serang(pilihan);
		}
		
		
	}
	
	return 0;
}










