#ifndef RPCDEMO_NET_FD_EVENT_GROUP_H
#define RPCDEMO_NET_FD_EVENT_GROUP_H

#include <vector>
#include "rpcdemo/common/mutex.h"
#include "rpcdemo/net/fd_event.h"

namespace rpcdemo {

class FdEventGroup {

 public:

  FdEventGroup(int size);

  ~FdEventGroup();
  FdEvent* getFdEvent(int fd);

 public:
  static FdEventGroup* GetFdEventGroup();

 private:
  int m_size {0};
  std::vector<FdEvent*> m_fd_group;
  Mutex m_mutex;

};

}

#endif