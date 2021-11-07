#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    cout << "enter n for random-array:  ";
    int n;
    cin>>n;
    int random_array[30];
      srand(time(NULL));
    for(int i=0; i<n; ++i)
    {

      random_array[i]=rand()%31;


}
    cout << "["; {
		for (int i = 0; i < n ; i++)
			cout << random_array[i] << " ";

			}
	cout <<  "]";


    return 0;
}