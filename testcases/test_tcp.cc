#include <memory>
#include "rpcdemo/common/log.h"
#include "rpcdemo/net/tcp/net_addr.h"
#include "rpcdemo/net/tcp/tcp_server.h"

void test_tcp_server() {

  rpcdemo::IPNetAddr::s_ptr addr = std::make_shared<rpcdemo::IPNetAddr>("127.0.0.1", 12346);

  DEBUGLOG("create addr %s", addr->toString().c_str());

  rpcdemo::TcpServer tcp_server(addr);

  tcp_server.start();

}

int main() {

  // rpcdemo::Config::SetGlobalConfig("../conf/rpcdemo.xml");
  // rpcdemo::Logger::InitGlobalLogger();

  rpcdemo::Config::SetGlobalConfig(NULL);

  rpcdemo::Logger::InitGlobalLogger(0);

  test_tcp_server();
  
}