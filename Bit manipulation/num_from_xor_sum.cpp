// CPP program to find two numbers with
// given Sum and XOR such that value of
// first number is minimum.
#include <iostream>
using namespace std;


void findNums(int X, int Y)
{

	// Initialize the two numbers
	int A, B;

	// Case 1: X < Y
	if (X < Y) {
		cout << -1<<"\n";
            return;
	}

	// Case 2: X-Y is odd
	else if (abs(X - Y) & 1) {
		std::cout << -1<<"\n"<< std::endl;
            return;
	}

	// Case 3: If both Sum and XOR
	// are equal
	else if (X == Y) {
		A = 0;
		B = Y;
	}

	// Case 4: If above cases fails
	else {

		// Update the value of A
		A = (X - Y) / 2;

		// Check if A & Y value is 0
		if ((A & Y) == 0) {

			// If true, update B
			B = (A + Y);
		}

		// Otherwise assign -1 to A,
		// -1 to B
		else {
            std::cout << -1<<"\n"<< std::endl;
            return;
		}
	}

	// Print the numbers A and B
	cout << A << " " << B<<"\n";
    return;
}

// Driver function
int main()
{
    // x=sum y=xor

    int q;
    cin>>q;
    while(q--)
    {
        unsigned long int x,y;
        cin>>x>>y;
        findNums(x, y);
    }
	return 0;
}



