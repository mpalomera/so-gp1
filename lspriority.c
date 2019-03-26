#include "types.h"
#include "stat.h"
#include "user.h"


int main(int argc, char ** argv){
  int pid;
  int priority;
  pid = atoi(argv[1]);
  priority = getpriority(pid);
  if(priority == -1) {
    printf(1,"Proces no found with id %d",pid);
  }else {
    printf(1,"Process %d has riority %d",pid,priority);
  }
  exit();
}