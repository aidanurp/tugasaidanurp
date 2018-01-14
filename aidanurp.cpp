#include <iostream>
#include <string>
using namespace std;

class parfume{
	public:
		void baunya(string harum);
		string merk, wangi;
};

int main (){
	parfume bodymist, EDP, EDT;
	//EDP : eu de parfume
	//EDT : eu de toilette
	
	bodymist.merk = "Victoria Secrets";
	EDP.merk = "Bath and Body Works";
	EDT.merk = "The Body Shop";
	
	cout << (bodymist.merk);
	bodymist.baunya("enak");
	
	cout << (EDP.merk);
	EDP.baunya("wangi");
	
	cout << (EDT.merk);
	EDT.baunya("segar");
		
}
void parfume::baunya(string harum){
	cout<<"Haruumya"<<harum<<"sekali \n";
}	

