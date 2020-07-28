
bool isBPMOK(float bpm)
{
  if(bpm < 70 || bpm > 150) {
    return true;
  }
  return false;
}

bool isSPO2OK(float spo2)
{
  if(spo2 < 80) {
    return true;
  }
  
  return false;
}

bool isRespRateOK(float respRate)
{
  if(respRate < 30 || respRate > 60) {
    return true;
  }
  
  return false;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  bool bpmFlag = isBPMOK(bpm);
  bool spo2Flag =  isSPO2OK(spo2);
  bool respRateFlag = isRespRateOK(respRate);
  
  return(bpmFlag && spo2Flag && respRateFlag);
}
