#include <iostream>
using namespace std;
#ifndef makepayments_H
#define makepayments_H
class makepayments
{
private:
	long int bill_ref_no;
	long int contact_no;
	long int challan_no;
public:
	makepayments() :bill_ref_no(0), contact_no(0), challan_no(0) {}
	makepayments(makepayments const& payment);
	int pay_bill(int);
	int recharge_phone(int);
	int pay_challan(int);
};
#endif 