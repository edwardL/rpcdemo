#ifndef RPCDEMO_COMMON_CONFIG_H
#define RPCDEMO_COMMON_CONFIG_H

#include <map>
#include "json_parser.h"
#include "rpcdemo/net/tcp/net_addr.h"


namespace rpcdemo {

struct RpcStub {
  std::string name;
  NetAddr::s_ptr addr;
  int timeout {2000};
};

class Config {
 public:
  
  Config(const char* jsonfile);

  Config();

  ~Config();

 public:
  static Config* GetGlobalConfig();
  static void SetGlobalConfig(const char* jsonfile);

 public:
  std::string m_log_level;
  std::string m_log_file_name;
  std::string m_log_file_path;
  int m_log_max_file_size {0};
  int m_log_sync_inteval {0};   // 日志同步间隔，ms

  int m_port {0};
  int m_io_threads {0};

  json_value_t * m_json_document{NULL};

  std::map<std::string, RpcStub> m_rpc_stubs;

};


}


#endif