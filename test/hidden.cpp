#include "hidden.hpp"
#include <boost/throw_exception.hpp>

void
hidden_throw()
	{
	BOOST_THROW_EXCEPTION(my_exception() << my_info(42));
	}
