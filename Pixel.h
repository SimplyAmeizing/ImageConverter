#ifndef PIXEL_H
#define PIXEL_H

#include <ostream>

class Pixel {
  int r = 0; // red
  int g = 0; // green
  int b = 0; // blue
  
public:
  Pixel(int r, int g, int b);
  Pixel();
  int getRed() const;
  int getGreen() const;
  int getBlue() const;
  void setRed(int r);
  void setGreen(int g);
  void setBlue(int b);
  Pixel operator+(const Pixel& p);
  
private:
  int getValidColor(int v);
};

std::ostream& operator<<(std::ostream& os, const Pixel& p);

#endif
