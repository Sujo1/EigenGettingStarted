#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;
using Eigen::MatrixXd;

int main () {
	MatrixXd M(3,3);
	M << 1,2,3,4,5,6,7,8,9;
	cout << M << endl;

	cout << "End of Prorgam." << endl;
	return 0;
}
