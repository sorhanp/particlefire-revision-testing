#include <boost/test/unit_test.hpp>
#include <screen.h>

BOOST_AUTO_TEST_CASE( test_screen_reportings )
{
  int a = 13, b = 12;
  BOOST_TEST(a == b);
  BOOST_TEST(a < b);
  BOOST_TEST(a - 1 < b);
  BOOST_TEST(b > a - 1);
}