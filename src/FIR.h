/*
  LIBRARY CODE STARTS HERE
 
 http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1279123369
 
 Made into a library by AlphaBeta (www.AlexanderBrevig.com)
 
 Do whatever you want with it.
 */
#ifndef FIR_h
#define FIR_h

#define FILTERTAPS 5



class FIR {
public:
  //construct without coefs
  FIR();
  //construct with coefs
  FIR(int newGain, int *newCoefs);

  void setGain(int newGain);

  void setCoefficients(int *newCoefs);

  //set coefficient at specified index
  void setCoefficient(int idx, int newCoef);

  int process(int in);

private:
  int values[FILTERTAPS];

  int coef[FILTERTAPS];

  //declare gain coefficient to scale the output back to normal
  int gain; // set to 1 and input unity to see what this needs to be

  int k; // k stores the index of the current array read to create a circular memory through the array
};
#endif

