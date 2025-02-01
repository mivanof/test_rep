#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
  ifstream fin("input.txt");

  string subject, s1;
  int cnt = 0, s2, sum = 0;
  
  fin >> subject;
  fin >> s1 >> s2;

  while (s1 != "STOP") {
    if (s1 == subject) {
		cnt++;
		sum += s2;
	}

    fin >> s1;

    if (s1 != "STOP") fin >> s2;
  }

  cout << fixed << setprecision(2) << double(sum) / cnt;

  fin.close();
  
  return 0;
}