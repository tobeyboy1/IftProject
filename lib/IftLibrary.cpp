#include "IftLibrary.h"


void IftLib::StrSort(string& str) {


	sort(begin(str), end(str), greater<int>());

	string temp_str;

	for (int i = 0; i < str.length(); i++) {
		if (int(str[i]) % 2 != 0) {
			temp_str += str[i];
		}
		else {
			temp_str += "KB";
		}
	}
	str = temp_str;
}

int IftLib::SumStrElements(string& str) {
	int sum = 0;

	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i])) {
			sum += str[i] - '0'; 
		}
	}

	return sum;
}

bool IftLib::CheckInt(int& number) {
	if (number >= 100 && number % 32 == 0) {
		return true;
	}
	return false;
}