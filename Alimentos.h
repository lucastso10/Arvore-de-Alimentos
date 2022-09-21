/*
um ponteiro com um elemento dessa classe
vai ser implementado em cada node da árvore4
*/

#ifndef __ALIMENTOS_H__
#define __ALIMENTOS_H__

#include <string>

class Alimentos
{
public:
  Alimentos(std::string m_foodAndServing, float m_totalFat, float m_sodium, float m_totalCarbonHydrate, std::string m_foodType);
  ~Alimentos();

  std::string Get_foodAndServing();
  void Set_foodAndServing(const std::string foodAndServing);

  float Get_totalFat();
  void Set_totalFat(const float totalFat);

  float Get_sodium();
  void Set_sodium(const float sodium);

  float Get_totalCarbonHydrate();
  void Set_totalCarbonHydrate(const float totalCarbonHydrate);

  std::string Get_foodType();
  void Get_foodType(const std::string foodType);

private:
  std::string m_foodAndServing;
  float m_totalFat;
  float m_sodium;
  float m_totalCarbonHydrate;
  std::string m_foodType;
};

#endif