
bool checkBPM(float bpm)
{
  if(bpm < 70 || bpm > 150) {
    return false;
  }
  return true;
}

bool checkSPO2(float spo2)
{
  if(spo2 < 80) {
    return false;
  }
  
  return true;
}

bool checkRespRate(float respRate)
{
  if(respRate < 30 || respRate > 60) {
    return false;
  }
  
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  if(checkBPM(bpm) && checkSPO2(spo2) && checkRespRate(respRate))
  {
    return true;
  }
   
  return false;
}
