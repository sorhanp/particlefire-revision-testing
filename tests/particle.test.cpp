#include <boost/test/unit_test.hpp>
#include <fakeit.hpp>

#include <particle.h>
#include <screen.h>

struct ParticleFixture {
  ParticleFixture(){
      fakeit::Mock<particlefire::Screen> spy(screenf);
  }

  ~ParticleFixture(){

  }

  particlefire::Particle particleF;
  particlefire::Screen screenf;
};

BOOST_FIXTURE_TEST_SUITE(ParticleClassTests, ParticleFixture)

  BOOST_AUTO_TEST_CASE(InitTest_zero_position){
    //Particle -constructor must set single particle on middle of the screen
    BOOST_REQUIRE_EQUAL(particleF.GetXpos(), 0);
    BOOST_REQUIRE_EQUAL(particleF.GetYpos(), 0);
  }

  BOOST_AUTO_TEST_CASE(InitTest_zero_position_after_zero_update){
    particleF.UpdatePosition(0);
    //If no time has passed particle should have 
    BOOST_REQUIRE_EQUAL(particleF.GetXpos(), 0);
    BOOST_REQUIRE_EQUAL(particleF.GetYpos(), 0);
  }

  BOOST_AUTO_TEST_CASE(InitTest_zero_position_after_update){
    particleF.UpdatePosition(1);
    //When moved, particle must _not_ be on middle of the screen
    BOOST_REQUIRE_NE(particleF.GetXpos(), 0);
    BOOST_REQUIRE_NE(particleF.GetYpos(), 0);
  }

BOOST_AUTO_TEST_SUITE_END()