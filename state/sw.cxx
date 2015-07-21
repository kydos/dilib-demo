#include "util.hxx"
#include <dilib/state.hxx>

#include <random>
#include <chrono>
#include <thread>

int main(int argc, char *argv[]) {

  if (argc > 2) {
    std::string name = argv[1];
    std::string did = argv[2];
    std::cout << "StateWriter(" << name << ")" << std::endl;
    dilib::StateWriter<dilib::demo::DevicePosition> sw(name);
    std::default_random_engine generator;
    std::uniform_int_distribution<float> distribution(0,100);

    while (true) {
      float lon = distribution(generator);
      float lat = distribution(generator);
      float lev = distribution(generator);
      dilib::demo::DevicePosition sample(did, lon ,lat, lev);
      sw.write(sample);
      std::cout << "(" << did << ", " << lon << ", " << lat << ", " << lev << ")" << std::endl;
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
  } else {
    std::cout << "USAGE:\n\tsw <name> <did>" << std::endl;
  }

}



