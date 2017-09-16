#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	map<string,string>Saudacao;
	Saudacao["brasil"]="Feliz Natal!";
	Saudacao["alemanha"]="Frohliche Weihnachten!";
	Saudacao["austria"]="Frohe Weihnacht!";
	Saudacao["coreia"]="Chuk Sung Tan!";
	Saudacao["espanha"]="Feliz Navidad!";
	Saudacao["grecia"]="Kala Christougena!";
	Saudacao["estados-unidos"]="Merry Christmas!";
	Saudacao["inglaterra"]="Merry Christmas!";
	Saudacao["australia"]="Merry Christmas!";
	Saudacao["portugal"]="Feliz Natal!";
	Saudacao["suecia"]="God Jul!";
	Saudacao["turquia"]="Mutlu Noeller";
	Saudacao["argentina"]="Feliz Navidad!";
	Saudacao["chile"]="Feliz Navidad!";
	Saudacao["mexico"]="Feliz Navidad!";
	Saudacao["antardida"]="Merry Christmas!";
	Saudacao["canada"]="Merry Christmas!";
	Saudacao["irlanda"]="Nollaig Shona Dhuit!";
	Saudacao["belgica"]="Zalig Kerstfeest!";
	Saudacao["italia"]="Buon Natale!";
	Saudacao["libia"]="Buon Natale!";
	Saudacao["siria"]="Milad Mubarak!";
	Saudacao["marrocos"]="Milad Mubarak!";
	Saudacao["japao"]="Merii Kurisumasu!";


	string Pais;
	while(cin >> Pais){
		if(Saudacao.find(Pais) == Saudacao.end())
			cout << "--- NOT FOUND ---" << endl;

		else
			cout << Saudacao[Pais] << endl;

	}


}