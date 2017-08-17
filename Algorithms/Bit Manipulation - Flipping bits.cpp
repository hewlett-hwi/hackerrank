#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++)
	{
		unsigned int input;
		cin >> input;
		
		cout << ~input <<endl;
	}
	
	return 0;
}
