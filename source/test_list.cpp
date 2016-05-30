#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "List.hpp"

TEST_CASE("describe_constructor","[constructor]")
{
	List<int> list;
	REQUIRE(list.empty()==true);
	REQUIRE(list.size()==0);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}


