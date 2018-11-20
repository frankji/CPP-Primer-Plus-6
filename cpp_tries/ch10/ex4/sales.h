#ifndef FLAG1
#define FLAG1
const int QUARTERS = 4; // no external this time. 
class Sales
{
 	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double * ar, int n = QUARTERS);
		void setSales();
		void showSales() const;
};
#endif
