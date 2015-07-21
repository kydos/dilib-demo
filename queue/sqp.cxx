#include <dilib/queue.hxx>
#include <gen/sqmessage_DCPS.hpp>

#include <iostream>
#include <random>
#include <chrono>
#include <thread>


int main(int argc, char* argv[]) {
  if (argc > 1) {
    std::string qname(argv[1]);
    dilib::Enqueue<dilib::demo::Message> queue(qname, -1);
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0,100);
    int k = 0;
    while (true) {
      auto x = distribution(generator);
      auto y = distribution(generator);
      auto key = std::to_string(k);
      k++;
      auto body = "{\"x\"=" + std::to_string(x) + ", \"y\" = " + std::to_string(y) + "}";
      dilib::demo::Message msg(key, body);
      queue.enqueue(msg);
      std::cout << "(" << key << ", " << body << ")" << std::endl;
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
  }
  else
    std::cout << "USAGE:\n\tsqp <queue-name>" << std::endl;

}



