#include <bits/stdc++.h>
using namespace std;
int main() {
	bool bingo = false;
	vector<vector<vector<int>>> hit(5, vector<vector<int>>(5, vector<int>(5)));
	for (int i=0;i<5;i++) for (int j=0;j<5;j++) for (int k=0;k<5;k++){
		cin >> hit.at(i).at(j).at(k);
	}


//縦横奥
	for (int i=0;i<5;i++) for (int j=0;j<5;j++) for (int k=0;k<5;k++){
		if (hit.at(i).at(j).at(k) != 1) break;
		if (k == 4) bingo = true; 
	}
	for (int i=0;i<5;i++) for (int j=0;j<5;j++) for (int k=0;k<5;k++){
		if (hit.at(i).at(k).at(j) != 1) break;
		if (k == 4) bingo = true; 
	}
	for (int i=0;i<5;i++) for (int j=0;j<5;j++) for (int k=0;k<5;k++){
		if (hit.at(k).at(i).at(j) != 1) break;
		if (k == 4) bingo = true; 
	}

//斜め
	for (int i=0;i<5;i++) for (int j=0;j<5;j++){
		if (hit.at(i).at(j).at(j) != 1) break;
		if (j == 4) bingo = true; 
	}
	for (int i=0;i<5;i++) for (int j=0;j<5;j++){
		if (hit.at(i).at(j).at(4-j) != 1) break;
		if (j == 4) bingo = true; 
	}

	for (int i=0;i<5;i++) for (int j=0;j<5;j++){
		if (hit.at(j).at(i).at(j) != 1) break;
		if (j == 4) bingo = true; 
	}
	for (int i=0;i<5;i++) for (int j=0;j<5;j++){
		if (hit.at(j).at(i).at(4-j) != 1) break;
		if (j == 4) bingo = true; 
	}

	for (int i=0;i<5;i++) for (int j=0;j<5;j++){
		if (hit.at(j).at(j).at(i) != 1) break;
		if (j == 4) bingo = true; 
	}
	for (int i=0;i<5;i++) for (int j=0;j<5;j++){
		if (hit.at(j).at(4-j).at(i) != 1) break;
		if (j == 4) bingo = true; 
	}


	for (int i=0;i<5;i++) {
		if (hit.at(i).at(i).at(i) != 1) break;
		if (i == 4) bingo = true; 
	}
	for (int i=0;i<5;i++){
		if (hit.at(i).at(i).at(4-i) != 1) break;
		if (i == 4) bingo = true; 
	}




	cout << bingo <<endl;

}
