#include <boost/test/unit_test.hpp>
#include <particle.h>

struct ParticleFixture {
  ParticleFixture(){
  }

  ParticleFixture(){

  }
  particlefire::Particle particleF;
};

BOOST_FIXTURE_TEST_SUITE(ParticleClassTests, ParticleFixture)

  BOOST_AUTO_TEST_CASE(InitTests){

    //Particle -constructor must set single particle on middle of the screen
    BOOST_REQUIRE_EQUAL(particleF.GetXpos(), 0);
    BOOST_REQUIRE_EQUAL(particleF.GetYpos(), 0);

    particleF.UpdatePosition(1);
    //When moved, particle must _not_ be on middle of the screen
    BOOST_REQUIRE_NE(particleF.GetXpos(), 0);
    BOOST_REQUIRE_NE(particleF.GetYpos(), 0);

  }

BOOST_AUTO_TEST_SUITE_END()