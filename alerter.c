#include "alerter.h"
#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(const float maxThreshold, alerter_funcptr alerters[], Stats computedStats){
  
  if ( computedStats.max > maxThreshold){
       alerters[0]();
       alerters[1]();
  } 
}
  
void emailAlerter(){  
     emailAlertCallCount=1;
  }
  
void ledAlerter(){
    ledAlertCallCount=1;
  }

