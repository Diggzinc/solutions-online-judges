#include <iostream>
#include <cstdlib>
#include <vector>

#define INSIDE_THE_HOUSE(fruit_location,house_start,house_end) (fruit_location >= house_start && fruit_location <= house_end)

using namespace std;

int main(int argc, char** argv)
{
	int s, t,
		a, b,
		m, n,
		p, l,
		apples = 0, oranges = 0;
	
	cin >> s >> t
		>> a >> b
		>> m >> n;
	
	for(int i = 0; i < m; i++)
	{
		cin >> p;
		l = a + p;
		
		if(INSIDE_THE_HOUSE(l, s, t))
		{
			apples++;
		}
		
	}
	
	for(int i = 0; i < n; i++)
	{
		cin >> p;
		l = b + p;
		if(INSIDE_THE_HOUSE(l, s, t))
		{
			oranges++;
		}
	}
	
	cout << apples << endl 
		 << oranges << endl;
	
	
	return EXIT_SUCCESS;
}
