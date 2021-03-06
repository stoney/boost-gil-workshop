add_executable(gil_scanline_read_iterator gil_scanline_read_iterator.cpp ${GIL_ALL_HPP})

add_executable(gil_pnm gil_pnm.cpp ${GIL_ALL_HPP})

if (TIFF_FOUND)
  include_directories(${CMAKE_CURRENT_SOURCE_DIR})
  include_directories(${TIFF_INCLUDE_DIR})
  add_executable(gil_tiff gil_tiff.cpp tif_stream.cxx ${GIL_ALL_HPP})
  target_link_libraries(gil_tiff ${TIFF_LIBRARY}  ${TIFF_LIBRARIES} )
endif()

# Help IDE users to find Boost.GIL headers
source_group("Header Files\\gil" FILES ${GIL_HPP})
source_group("Header Files\\gil\\extension\\io_new" FILES ${GIL_EXT_IO_HPP})
source_group("Header Files\\gil\\extension\\io_new\\detail" FILES ${GIL_EXT_IO_DETAIL_HPP})
source_group("Header Files\\gil\\extension\\io_new\\formats\\bmp" FILES ${GIL_EXT_IO_FORMATS_BMP_HPP})
source_group("Header Files\\gil\\extension\\io_new\\formats\\gdal" FILES ${GIL_EXT_IO_FORMATS_GDAL_HPP})
source_group("Header Files\\gil\\extension\\io_new\\formats\\jpeg" FILES ${GIL_EXT_IO_FORMATS_JPEG_HPP})
source_group("Header Files\\gil\\extension\\io_new\\formats\\png" FILES ${GIL_EXT_IO_FORMATS_PNG_HPP})
source_group("Header Files\\gil\\extension\\io_new\\formats\\pnm" FILES ${GIL_EXT_IO_FORMATS_PNM_HPP})
source_group("Header Files\\gil\\extension\\io_new\\formats\\targa" FILES ${GIL_EXT_IO_FORMATS_TARGA_HPP})
source_group("Header Files\\gil\\extension\\io_new\\formats\\tiff" FILES ${GIL_EXT_IO_FORMATS_TIFF_HPP})
source_group("Header Files\\gil\\extension\\toolbox" FILES ${GIL_EXT_TOOLBOX_HPP})
