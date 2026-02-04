#ifndef RPCDEMO_NET_IO_THREAD_GROUP_H
#define RPCDEMO_NET_IO_THREAD_GROUP_H

#include <vector>
#include "rpcdemo/common/log.h"
#include "rpcdemo/net/io_thread.h"



namespace rpcdemo {

class IOThreadGroup {

 public:
  IOThreadGroup(int size);

  ~IOThreadGroup();

  void start();

  void join();

  IOThread* getIOThread();

 private:

  int m_size {0};
  std::vector<IOThread*> m_io_thread_groups;

  int m_index {0};

};

}


#endif