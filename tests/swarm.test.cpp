#include <boost/test/unit_test.hpp>
#include <swarm.h>

struct SwarmFixture {
  SwarmFixture(){

  }
  
  ~SwarmFixture(){

  }

  particlefire::Swarm swarmF;
};

BOOST_FIXTURE_TEST_SUITE(ScreenClassTests, SwarmFixture)

  BOOST_AUTO_TEST_CASE(InitTest_zero_position){

  }

BOOST_AUTO_TEST_SUITE_END()