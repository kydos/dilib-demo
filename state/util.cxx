#include "util.hxx"



std::ostream& operator << (std::ostream& os,  dilib::demo::DevicePosition p) {
	os << "(" << p.did() << ", " << p.lon() << ", " << p.lat() << ", " << p.lev() << ")";
	return os;
}



