#include "visibility_test_lib.hpp"
#include <boost/throw_exception.hpp>

#if defined(VISIBILITY_TEST_LIB_DYN_LINK)
#	define EXPORT BOOST_SYMBOL_EXPORT
#else
#	define EXPORT
#endif

void
EXPORT
hidden_throw()
	{
	BOOST_THROW_EXCEPTION(my_exception() << my_info(42));
	}
