// Brian Macias
// CST-201

#include <iostream>
#include <string>
using namespace std;

bool slipCheck(string slip) {
	int i = 0, base = 0;

	cout << slip.substr(i, slip.size()) << endl;

	if (base == slip.size()) {
		return false;
	}

	if (slip[i] == 'D' || slip[i] == 'E') {
		i++;
		base++;
		slipCheck(slip.substr(base));

		while (slip[i] == 'F') {
			i++;
			base++;
			slipCheck(slip.substr(base));
		}
		if (slip[i] == 'G') {
			
			cout << "Slip found" << endl;
			return true;
		}
	}

}

bool slapCheck(string slap) {
	int i = 0, base = 0;

	cout << slap.substr(i, slap.size()) << endl;
	
	if (base == slap.size()) {
		return false;
	}

	if (slap[i] == 'A') {
		i++;
		base++;
		if (slap[i] == 'H') {
			cout << "2 Letter Slap Found" << endl;
			return true;
		}
		else if (slap[i] == 'B') {
			i++;
			base++;
			if (slipCheck(slap.substr(base))) {
				i++;
				base++;
			}
		}
		else if (slap[i] == 'C') {
			cout << "Slap found" << endl;
			return true;
		}
	}


}

int main() {
	string slip = "DEFFFFG";
	slipCheck(slip);
	cout << endl;

	string slap = "ABDEFGC";
	slapCheck(slap);
	
}

