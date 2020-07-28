
bool isBPMOK(float bpm)
{
  if(bpm < 70 || bpm > 150) {
    return false;
  }
  return true;
}

bool isSPO2OK(float spo2)
{
  if(spo2 < 80) {
    return false;
  }
  
  return true;
}

bool isRespRateOK(float respRate)
{
  if(respRate < 30 || respRate > 60) {
    return false;
  }
  
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  bool bpmFlag = isBPMOK(bpm);
  bool spo2Flag =  isSPO2OK(spo2);
  bool respRateFlag = isRespRateOK(respRate);
  
  if(bpmFlag && spo2Flag && respRateFlag)
  {
    return true;
  }
   
  return false;
}
