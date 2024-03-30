#include <iostream>
#include <ctime>
#include <string>
using namespace std;
/*
int main() {
	int myage = 28;
	int votingage = 18;
if (myage <= votingage) {
	cout << "old enough to vote ";
	} else {
	cout << "not enough to vote ";
}
}
 
int main() {
	int time = 10;
	if (time<=10) {
		cout << "good morning";
	}else if (time>=12) {
		cout << "good evining";
	}else {
		cout << "good afternon";

	}
}

int main() {
	int time = 12;
	string result_DN = (time>=18) ? "Night" :"Day";
	cout << result_DN;
}

int main() {
	int day = 1;
	switch (day) {
	case 1:
		cout << "1";
		break;
	case 2:
		cout << "یکشنبه";
		break;
	case 3:
		cout << "دوشنبه";
		break;
	case 4:
		cout << "سه شنبه";
		break;
	case 5:
		cout << "چهارشنبه ";
		break;
	case 6:
		cout << "پنج شنبه";
		break;
	case 7:
		cout << "جمعه";
		break;

	default:
		cout << "نمیدونم";
    }
}

int main() {
	int i = 5;
	while (i > 0) {
		i--;
		cout << i<<"\n";

	}
}

int main() {
	int  i = 0;
	do {
		cout << i << "\n";
		i++;
	} 
	while (i<5);
}
*/
int main() {
	for (int i = 0; i <= 5000;i=i+2) {
		cout << i << "\n";

	}
	time_t end = time(NULL);
	cout << end;

}