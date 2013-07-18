// ---------------------------------------------------------------------
// $Id$
//
// Copyright (C) 2010 - 2013 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE at
// the top level of the deal.II distribution.
//
// ---------------------------------------------------------------------



// test the testsuite framework. this test is supposed to compile
// successfully but not link

#include "../tests.h"
#include <deal.II/base/logstream.h>
#include <fstream>
#include <cstdlib>

void function_that_does_not_exist ();


int main ()
{
  std::ofstream logfile("compile/output");
  deallog.attach(logfile);
  deallog.depth_console(0);

  function_that_does_not_exist ();

  deallog << "OK" << std::endl;
}

