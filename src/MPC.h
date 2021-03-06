#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

#define for_loop(iterator, limit) for(unsigned it = iterator; it < limit; it++)
#define speed_limit_in_simulator  50.0f
// size_t N = 25;
// double dt = 0.05;
// const double Lf = 2.67;

static size_t N = 20;
static double dt = 0.05;
static double Lf = 2.67;

using namespace std;

class MPC {
 public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
};

#endif /* MPC_H */
