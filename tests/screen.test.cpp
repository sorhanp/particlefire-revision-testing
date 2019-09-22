#include <boost/test/unit_test.hpp>
#include <screen.h>

// Inherit screen to get access to protected members
struct ScreenFixture : particlefire::Screen {
  ScreenFixture(){

  }
  
  ~ScreenFixture(){

  }

  particlefire::Screen screenF;
};

BOOST_FIXTURE_TEST_SUITE(ScreenClassTests, ScreenFixture)

  BOOST_AUTO_TEST_CASE(Constructor_test){
      //If no config is provided protected data members should be default
      BOOST_REQUIRE_EQUAL(screenF.screen_width_, 800);
      BOOST_REQUIRE_EQUAL(screenF.screen_height_, 600);
      BOOST_REQUIRE_EQUAL(screenF.target_fps_, 60);
  }

  BOOST_AUTO_TEST_CASE(Init_test){
      BOOST_REQUIRE_EQUAL(screenF.Init(), true);
  }

BOOST_AUTO_TEST_SUITE_END()