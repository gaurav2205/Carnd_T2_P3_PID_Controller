#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */
//double Kp, Ki, Kd, p_error, i_error,d_error, total_error;
PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
	this->Kp = Kp_;
    this->Ki = Ki_;
    this->Kd = Kd_;
    this->p_error = 0.0;
    this->i_error = 0.0;
    this->d_error = 0.0;
  	this->total_error = 0.0;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  d_error = cte-p_error; // change in the cross track error
  p_error = cte; // directly proportional to cross track error
  i_error +=cte; // all the cross track errors uptil now 
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  
  total_error = (-Kp*p_error) - (Ki*i_error) - (Kd*d_error);
  return total_error;  // TODO: Add your total error calc here!
}