# Project - Driving a vehicale using PID controller.

This project was completed by first successfully implementing the steering control of the vehicle and then finally tuning all the parameters of the PID controller. 

## The parameters of PID controller

There are 3 parameters of PID controller: 

* The Proportional Constant (Kp):This is basically to steer the car proportional to cross track error ( distance of the car from the center of the lane). The higher the value more oscillations will be there on a straight road but if the value is too small the car may never correct itself.

* The Derivative Constant (Kd) : This corrects the change in CTE from one value to the next. This means that 1) if the derivative is quickly changing, the car will correct itself (i.e. higher steering angle) faster, such as in the case of a curve, and 2) if the car is moving outward from the middle, this will cause the steering to get larger (as the derivative sign will match the proportional sign), but if the car is moving toward the center (meaning the derivative value will be negative), the car's steering angle will get smoothed out, leading to a more smoother driving experience. Too high of a coefficient leads to almost constant steering angle changes of large degrees, where although the car will be well-centered it can hardly move. Too low of a D coefficient will lead to the oscillations being too high with more overshooting

* The Integral Constant (Ki) : This represents the integral sums up all CTEs up to that point, such that too many negative CTEs (in this case, meaning the car has been to the left of the middle of the lane for awhile) will drive up this value, causing the car to turn back toward the middle, preventing the car from driving on one side of the lane the whole time. If the coefficient is too high for I, the car tends to have quicker oscillations, and does not tend to get up to a quick speed. A low coefficent for I will cause the car to tend to drift to one side of the lane or the other for longer periods of time.
 

## Parameter Tuning

The final parameters were used using trial and error. I started of tuning initially the Kp parameter and tuned it in such a way that the oscillations on a straight line came to minimum. the final tuned parameter was set as Kp : 0.14
Secondly i started tuning Ki after that. It took a lot of time to tune it as the Ki for it to work should be very small. the final chosen parameter was Ki : 0.0001
Thirdly the final parameter (Kd) was tuned in order to minimize the oscilations on curves as well. It was tuned to 3.0 
All the parameters used in the end were Kp, Ki, Kd = 0.14 , 0.0001, 3.0


## Goal Achieved

In the final program the vehicle was able to drive inside the track and with less possible oscillations. 

# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

Fellow students have put together a guide to Windows set-up for the project [here](https://s3-us-west-1.amazonaws.com/udacity-selfdrivingcar/files/Kidnapped_Vehicle_Windows_Setup.pdf) if the environment you have set up for the Sensor Fusion projects does not work for this project. There's also an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3).

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)

## Editor Settings

We've purposefully kept editor configuration files out of this repo in order to
keep it as simple and environment agnostic as possible. However, we recommend
using the following settings:

* indent using spaces
* set tab width to 2 spaces (keeps the matrices in source code aligned)

## Code Style

Please (do your best to) stick to [Google's C++ style guide](https://google.github.io/styleguide/cppguide.html).

## Project Instructions and Rubric

Note: regardless of the changes you make, your project must be buildable using
cmake and make!

More information is only accessible by people who are already enrolled in Term 2
of CarND. If you are enrolled, see [the project page](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/f1820894-8322-4bb3-81aa-b26b3c6dcbaf/lessons/e8235395-22dd-4b87-88e0-d108c5e5bbf4/concepts/6a4d8d42-6a04-4aa6-b284-1697c0fd6562)
for instructions and the project rubric.

## Hints!

* You don't have to follow this directory structure, but if you do, your work
  will span all of the .cpp files here. Keep an eye out for TODOs.





