/* turl.cpp  Test program to open web page in default browser

   usage is: 

   turl

*/

// standard headers
#include <fstream>
#include <iostream>
#include <signal.h>     /* signal */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* getenv */
#include <string>
#include <time.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <list>
#include <CoreFoundation/CFBundle.h>
#include <ApplicationServices/ApplicationServices.h>

using namespace std;
using std:: string;

// global variable declarations
// end of global variable declarations


int main(int argc, char** argv) // although called main, the main phase is app.exec() waiting for an event
{
  int     chk_interval = 2; // check for new messages every chk_interval seconds
  char    debug_opt;
  char*   debug_param;
  int     res = 0; // for functions returning a result
  int     sec;
  int     timeout = 3; // if zone busy but becomes free within timeout period, queued message should play

// max positive number in int32 is 2,147,483,647
//  cookie = 400000000 + getpid(); // cookie should be unique

  system("open http://www.bbc.co.uk");

  sleep(1); // give VIPA announce-d chance to register us as a client

// cannot set new message check interval in object's data member from main, because data member's protected
//  sec = alarm(chk_interval); // so that handler routine will be invoked in chk_interval seconds time

//  return app.exec();
} 

