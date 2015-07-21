#include "util.hxx"
#include <dilib/state.hxx>

int main(int argc, char* argv[]) {

  if (argc > 1) {
    std::string name = argv[1];
    std::cout << "StateReader(" << name << ")" << std::endl;
    dilib::StateReader<dilib::demo::DevicePosition> state(name);

    state.on_change([](dilib::StateReader<dilib::demo::DevicePosition>& s) {
	dilib::demo::DevicePosition p101("101", 0, 0, 0);
	dilib::demo::DevicePosition p102("102", 0, 0, 0);
	auto s101 = s.get(p101);
	auto s102 = s.get(p102);
	std::cout << s101 << std::endl;
	std::cout << s102 << std::endl;
      });
    char ch;
    std::cin >> ch;
  } else
    std::cout << "USAGE:\n\tsv <name>" << std::endl;

  return 0;
}

