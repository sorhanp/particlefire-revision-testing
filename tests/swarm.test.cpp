#include <boost/test/unit_test.hpp>
#include <swarm.h>

struct SwarmFixture {
  SwarmFixture(){

  }
  
  ~SwarmFixture(){

  }

  particlefire::Swarm swarmF;
};

BOOST_FIXTURE_TEST_SUITE(SwarmClassTests, SwarmFixture)

  BOOST_AUTO_TEST_CASE(TDB){

  }

BOOST_AUTO_TEST_SUITE_END()