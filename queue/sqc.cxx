#include <iostream>
#include <random>
#include <chrono>
#include <thread>

#include <gen/sqmessage_DCPS.hpp>

std::ostream& operator << (std::ostream& os, const dilib::demo::Message& msg);

#include <dilib/queue.hxx>

std::ostream& operator << (std::ostream& os, const dilib::demo::Message& d) {
  os << ">> {" << d.key() << ", " << d.body() << "}";
  return os;
};
  

int main(int argc, char* argv[]) {
  if (argc > 2) {
    std::string qname(argv[1]);
    int t = atoi(argv0[2]);
    dds::core::Duration timeout = (t == -1) ?
      dds::core::Duration::infinite() :
      dds::core::Duration::from_millisecs(t);
    
    std::cout << "Creating the queue..." << std::endl;
    dilib::Queue<dilib::demo::Message> queue(qname, -1);
    std::cout << "Queue Created" << std::endl;
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0,100);
    std::cout << "going to take data from the queue..." << std::endl;
    while (true) {      
      auto d = queue.dequeue(dds::core::Duration::from_millisecs(timeout));
      std::cout << d << std::endl;
    }
  }
  else
    std::cout << "USAGE:\n\tsqc <queue-name> <timeout-ms [-1 for infinite]>" << std::endl;

}



