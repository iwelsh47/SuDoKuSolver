//
//  grid_3x3.cpp
//  SuDoKuSolver
//
//  Created by Ivan Welsh on 17/02/18.
//  Copyright © 2018 Hermes Productions. All rights reserved.
//

#include "grid_3x3.hpp"
#include "logical_solver.hpp"
#include "solver.hpp"

bool SolveGrid(Grid3x3& grid) {
  return SolveGrid<3,3>(grid);
}

bool LogicallySolveGrid(Grid3x3& grid) {
  return LogicallySolveGrid<3,3>(grid);
}