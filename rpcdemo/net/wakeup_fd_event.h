#ifndef RPCDEMO_NET_WAKEUP_FDEVENT_H
#define RPCDEMO_NET_WAKEUP_FDEVENT_H

#include "rpcdemo/net/fd_event.h"

namespace rpcdemo {

class WakeUpFdEvent : public FdEvent {
 public:
  WakeUpFdEvent(int fd);

  ~WakeUpFdEvent();

  void wakeup();

 private:

};



}

#endif