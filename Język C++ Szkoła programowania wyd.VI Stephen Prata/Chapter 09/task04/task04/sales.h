#pragma once


namespace SALES
{
	class Sales {
	public:
		Sales(const double ar[], int n);
		void setSales();
		void showSales();

	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	

	

	
	
	
}
