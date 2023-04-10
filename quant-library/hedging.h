// quant-library.cpp : Defines the entry point for the application.
//

using namespace std;

// Class for calculating basis risk at a point in time

class Basis {
private:
	double basis;

public:
	void set_basis(double spot_t1, double future_t1) {
		basis = spot_t1 - future_t1;
	}

	double get_basis() {
		return basis;
	}
};


// Class for calculating the capital assest pricing model
class CAPM {
private:
	double market_return;
	double risk_free_rate;
	double beta;
	double capm;

public:
	void set_CAPM(double market_return, double risk_free_rate, double beta) {
		capm = risk_free_rate + (beta * (market_return - risk_free_rate));
	}

	double get_CAPM() {
		return capm;
	}
};

