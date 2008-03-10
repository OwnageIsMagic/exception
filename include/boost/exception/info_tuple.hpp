//Copyright (c) 2006-2008 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef UUID_63EE924290FB11DC87BB856555D89593
#define UUID_63EE924290FB11DC87BB856555D89593

#include <boost/exception/info.hpp>
#include <boost/tuple/tuple.hpp>

namespace
boost
	{
	template <
		class E,
		class Tag1,class T1,
		class Tag2,class T2 >
	E const &
	operator<<(
		E const & x,
		tuple<
			error_info<Tag1,T1>,
			error_info<Tag2,T2> > const & v )
		{
		return x << v.get<0>() << v.get<1>();
		}

	template <
		class E,
		class Tag1,class T1,
		class Tag2,class T2,
		class Tag3,class T3 >
	E const &
	operator<<(
		E const & x,
		tuple<
			error_info<Tag1,T1>,
			error_info<Tag2,T2>,
			error_info<Tag3,T3> > const & v )
		{
		return x << v.get<0>() << v.get<1>() << v.get<2>();
		}

	template <
		class E,
		class Tag1,class T1,
		class Tag2,class T2,
		class Tag3,class T3,
		class Tag4,class T4 >
	E const &
	operator<<(
		E const & x,
		tuple<
			error_info<Tag1,T1>,
			error_info<Tag2,T2>,
			error_info<Tag3,T3>,
			error_info<Tag4,T4> > const & v )
		{
		return x << v.get<0>() << v.get<1>() << v.get<2>() << v.get<3>();
		}
	}

#endif