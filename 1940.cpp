#include <iostream>

using namespace std;

int main(){
	int Players, Rounds, Winner=0, Score, Highest=0;
	cin >> Players >> Rounds;
	int Scoreboard[Players][Rounds];
	for(int i=0;i<Players;i++){
		for(int j=0;j<Rounds;j++){
			cin >> Score;
			Scoreboard[i][j]=Score;

		}
	}	
	
	int ScoreByPlayer[Players];
	int i;
	
	for(int j=0;j<Rounds;j++){
		int SomaLinha=0;
		for(i=0;i<Players;i++){
			cout << " " <<  Scoreboard[i][j] << " ";
			SomaLinha+=Scoreboard[i][j];
		}
		ScoreByPlayer[j]=SomaLinha;
		cout << " | " << SomaLinha << endl;
	}

	for(int i=0;i<Players;i++){
		if(ScoreByPlayer[i] >= Highest){
			Highest = ScoreByPlayer[i];
			Winner = i+1;
		}
	}

	cout << "Winner = " << Winner << endl;

}