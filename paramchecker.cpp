
#define BPM_MIN 70
#define BPM_MAX 150
#define SPO2_MIN 0
#define SPO2_MAX 80
#define RESP_MIN 30
#define RESP_MAX 60


bool isVitalOk(float vital, float minVal, float maxVal)
{
  if( (vital < minVal) || (vital > maxVal))
  {
    return false;
  }
  
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  return(isVitalOk(bpm, BPM_MIN, BPM_MAX) && isVitalOk(spo2, SPO2_MIN, SPO2_MAX) && isVitalOk(respRate, RESP_MIN, RESP_MAX));
}
