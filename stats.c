#include "stats.h"
#include "math.h"


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    
    if( setlength > 0)
    {
	float average= 0.0;
    	float sum=numberset[0];
    	float max= numberset[0];
    	float min= numberset[0];
        for( int i = 1; i < setlength; i++)
        {
                sum = sum + numberset[i];
                if(numberset[i]>max)
                    max= numberset[i];

                if(numberset[i]<min)
                    min= numberset[i];         
        }
          average = sum / setlength;	
		  s.average =  average;
          s.min =  min;
          s.max = max; 
    }
    
    else 
    {
          s.average =  NAN;
          s.min =  NAN;
          s.max = NAN; 
    }
	return s;


}


