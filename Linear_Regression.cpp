#include <iostream>
#include <vector>
#include <tuple>
#include <numeric>
#include <cmath>
#include <limits>

using namespace std;

class LinearRegression {
public:
	LinearRegression() {

	}

	~LinearRegression() {

	}

	LinearRegression(vector<double> & m_x_vals_, vector<double> m_y_vals_),
	m_y_vals(m_y_vals_), m_num_elems(m_y_vals_.size())

	void trainAlgo(int num_iters_, double a_init_, double b_init_) {
		int iter = 0;
		m_a = a_init;
		m_b = b_init;

	}

	double regress(double x_) {

	}

private:

	vector<double> m_x_vals;
	vector<double> m_y_vals;
	double m_num_elems;
	double m_a;
	double m_b;

}

int main(int argc, char ** argv)
{
	/* code */
	vector<double> y ({2.8, 2.9, 7.6, 9, 8.6});
	vector<double> x({1,2,3,4,5});
	return 1;
}