#include "util.hxx"
#include <dilib/state.hxx>


int main(int argc, char *argv[]) {

  if (argc > 1) {
    std::string name = argv[1];
    std::cout << "StateStream(" << name << ")" << std::endl;
    dilib::StateStream<dilib::demo::DevicePosition> sw(name,
						       [](const dilib::demo::DevicePosition& p) {
							 std::cout << p << std::endl;
						       });

    char ch;
    std::cin >> ch;

  } else {
    std::cout << "USAGE:\n\tsw <name>" << std::endl;
  }

}





