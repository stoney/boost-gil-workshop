/*
    Copyright 2007-2008 Christian Henning
    Use, modification and distribution are subject to the Boost Software License,
    Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt).
*/

/*************************************************************************************************/

#ifndef BOOST_GIL_EXTENSION_IO_TIFF_READ_HPP
#define BOOST_GIL_EXTENSION_IO_TIFF_READ_HPP

#define BOOST_GIL_EXTENSION_IO_TIFF_READ_ENABLED

////////////////////////////////////////////////////////////////////////////////////////
/// \file               
/// \brief
/// \author Christian Henning \n
///         
/// \date   2007-2008 \n
///
////////////////////////////////////////////////////////////////////////////////////////

#include "tiff_tags.hpp"
#include "formats/tiff/supported_types.hpp"
#include "formats/tiff/read.hpp"
#include "formats/tiff/scanline_read.hpp"

#include "detail/get_reader.hpp"
#include "detail/make_backend.hpp"
#include "detail/make_reader.hpp"
#include "detail/make_dynamic_image_reader.hpp"
#include "detail/make_scanline_reader.hpp"

#include "detail/read_view.hpp"
#include "detail/read_image.hpp"
#include "detail/read_image_info.hpp"
#include "detail/read_and_convert_image.hpp"
#include "detail/read_and_convert_view.hpp"

#include "detail/image_read_iterator.hpp"

#endif // BOOST_GIL_EXTENSION_IO_TIFF_READ_HPP
