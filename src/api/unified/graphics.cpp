/*******************************************************
 * Copyright (c) 2015, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/array.h>
#include <af/graphics.h>
#include "symbol_manager.hpp"


af_err af_create_window(af_window *out, const int width, const int height, const char* const title)
{
    return CALL(out, width, height, title);
}

af_err af_set_position(const af_window wind, const unsigned x, const unsigned y)
{
    return CALL(wind, x, y);
}

af_err af_set_title(const af_window wind, const char* const title)
{
    return CALL(wind, title);
}

af_err af_set_size(const af_window wind, const unsigned w, const unsigned h)
{
    return CALL(wind, w, h);
}

af_err af_draw_image(const af_window wind, const af_array in, const af_cell* const props)
{
    CHECK_ARRAYS(in);
    return CALL(wind, in, props);
}

af_err af_draw_plot(const af_window wind, const af_array X, const af_array Y, const af_cell* const props)
{
    CHECK_ARRAYS(X, Y);
    return CALL(wind, X, Y, props);
}

af_err af_draw_plot3(const af_window wind, const af_array P, const af_cell* const props)
{
    CHECK_ARRAYS(P);
    return CALL(wind, P, props);
}

af_err af_draw_plot_nd(const af_window wind, const af_array in, const af_cell* const props)
{
    CHECK_ARRAYS(in);
    return CALL(wind, in, props);
}

af_err af_draw_plot_2d(const af_window wind, const af_array X, const af_array Y, const af_cell* const props)
{
    CHECK_ARRAYS(X, Y);
    return CALL(wind, X, Y, props);
}

af_err af_draw_plot_3d(const af_window wind, const af_array X, const af_array Y, const af_array Z,
                       const af_cell* const props)
{
    CHECK_ARRAYS(X, Y, Z);
    return CALL(wind, X, Y, Z, props);
}

af_err af_draw_scatter(const af_window wind, const af_array X, const af_array Y, const af_marker_type marker, const af_cell* const props)
{
    CHECK_ARRAYS(X, Y);
    return CALL(wind, X, Y, marker, props);
}

af_err af_draw_scatter3(const af_window wind, const af_array P, const af_marker_type marker, const af_cell* const props)
{
    CHECK_ARRAYS(P);
    return CALL(wind, P, marker, props);
}

af_err af_draw_scatter_nd(const af_window wind, const af_array in,
                          const af_marker_type marker, const af_cell* const props)
{
    CHECK_ARRAYS(in);
    return CALL(wind, in, marker, props);
}

af_err af_draw_scatter_2d(const af_window wind, const af_array X, const af_array Y,
                          const af_marker_type marker, const af_cell* const props)
{
    CHECK_ARRAYS(X, Y);
    return CALL(wind, X, Y, marker, props);
}

af_err af_draw_scatter_3d(const af_window wind,
                          const af_array X, const af_array Y, const af_array Z,
                          const af_marker_type marker, const af_cell* const props)
{
    CHECK_ARRAYS(X, Y, Z);
    return CALL(wind, X, Y, Z, marker, props);
}

af_err af_draw_hist(const af_window wind, const af_array X, const double minval, const double maxval, const af_cell* const props)
{
    CHECK_ARRAYS(X);
    return CALL(wind, X, minval, maxval, props);
}

af_err af_draw_surface(const af_window wind, const af_array xVals, const af_array yVals, const af_array S, const af_cell* const props)
{
    CHECK_ARRAYS(xVals, yVals, S);
    return CALL(wind, xVals, yVals, S, props);
}

af_err af_draw_vector_field_nd(const af_window wind,
                const af_array points, const af_array directions,
                const af_cell* const props)
{
    CHECK_ARRAYS(points, directions);
    return CALL(wind, points, directions, props);
}

af_err af_draw_vector_field_3d(
                const af_window wind,
                const af_array xPoints, const af_array yPoints, const af_array zPoints,
                const af_array xDirs, const af_array yDirs, const af_array zDirs,
                const af_cell* const props)
{
    CHECK_ARRAYS(xPoints, yPoints, zPoints, xDirs, yDirs, zDirs);
    return CALL(wind, xPoints, yPoints, zPoints, xDirs, yDirs, zDirs, props);
}

af_err af_draw_vector_field_2d(
                const af_window wind,
                const af_array xPoints, const af_array yPoints,
                const af_array xDirs, const af_array yDirs,
                const af_cell* const props)
{
    CHECK_ARRAYS(xPoints, yPoints, xDirs, yDirs);
    return CALL(wind, xPoints, yPoints, xDirs, yDirs, props);
}

af_err af_grid(const af_window wind, const int rows, const int cols)
{
    return CALL(wind, rows, cols);
}

af_err af_set_axes_limits_compute(const af_window wind,
                                  const af_array x, const af_array y, const af_array z,
                                  const bool exact, const af_cell* const props)
{
    CHECK_ARRAYS(x, y);
    if(z) CHECK_ARRAYS(z);
    return CALL(wind, x, y, z, exact, props);
}

af_err af_set_axes_limits_2d(const af_window wind,
                             const float xmin, const float xmax,
                             const float ymin, const float ymax,
                             const bool exact, const af_cell* const props)
{
    return CALL(wind, xmin, xmax, ymin, ymax, exact, props);
}

af_err af_set_axes_limits_3d(const af_window wind,
                             const float xmin, const float xmax,
                             const float ymin, const float ymax,
                             const float zmin, const float zmax,
                             const bool exact, const af_cell* const props)
{
    return CALL(wind, xmin, xmax, ymin, ymax, zmin, zmax, exact, props);
}

af_err af_set_axes_titles(const af_window wind,
                          const char * const xtitle,
                          const char * const ytitle,
                          const char * const ztitle,
                          const af_cell* const props)
{
    return CALL(wind, xtitle, ytitle, ztitle, props);
}

af_err af_show(const af_window wind)
{
    return CALL(wind);
}

af_err af_is_window_closed(bool *out, const af_window wind)
{
    return CALL(out, wind);
}

af_err af_set_visibility(const af_window wind, const bool is_visible)
{
    return CALL(wind, is_visible);
}

af_err af_destroy_window(const af_window wind)
{
    return CALL(wind);
}
