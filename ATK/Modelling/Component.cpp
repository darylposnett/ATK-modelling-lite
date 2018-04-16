/**
 * \file Component.cpp
 */

#include "Component.h"

namespace ATK
{
  template<typename DataType_>
  Component<DataType_>::~Component()
  {
  }
  
  template<typename DataType_>
  void Component<DataType_>::set_pins(std::vector<std::tuple<PinType, gsl::index>> pins)
  {
    this->pins = std::move(pins);
  }

  template<typename DataType_>
  void Component<DataType_>::update_model(ModellerFilter<DataType>* modeller)
  {
  }
  
  template<typename DataType_>
  void Component<DataType_>::update_steady_state(DataType dt)
  {
  }
  
  template<typename DataType_>
  void Component<DataType_>::update_state()
  {
  }
  
  template<typename DataType_>
  void Component<DataType_>::precompute(bool steady_state)
  {
  }
  
  template<typename DataType_>
  void Component<DataType_>::add_equation(gsl::index eq_number, bool steady_state)
  {
  }
  
  template class Component<double>;
}
