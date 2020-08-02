#ifndef SIMPLE_RPC_ETHERNET_IO_H_
#define SIMPLE_RPC_ETHERNET_IO_H_

#include <Ethernet.h>

class EthernetIO {
  public:
    EthernetIO(void) {}
    void begin(EthernetServer&);
    size_t available(void);
    size_t read(uint8_t*, size_t);
    size_t write(uint8_t*, size_t);
  private:
    EthernetServer* _es;
    EthernetClient* _ec;
};

#endif
