/*
 * License: MIT
 *
 * Copyright (c) 2012-2018 James Bensley.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *
 * File: Etherate Setup Functions
 *
 * File Contents:
 * speed_tests.c prototypes
 *
 */



///// Update protype desctions
// Run a speedtest (which is the default test operation if none is specified)
void speed_test_prep(struct app_params *app_params,
                struct frame_headers *frame_headers,
                struct speed_test *speed_test,
                struct test_interface *test_interface,
                struct test_params *test_params);

void speed_test_bps(struct app_params *app_params,
                    struct frame_headers *frame_headers,
                    struct speed_test *speed_test,
                    struct test_interface *test_interface,
                    struct test_params *test_params);

void speed_test_fps(struct app_params *app_params,
                    struct frame_headers *frame_headers,
                    struct speed_test *speed_test,
                    struct test_interface *test_interface,
                    struct test_params *test_params);

///// Change this name
void speed_test_full(struct app_params *app_params,
                struct frame_headers *frame_headers,
                struct speed_test *speed_test,
                struct test_interface *test_interface,
                struct test_params *test_params);

void speed_test_pacing(struct app_params *app_params,
                       struct frame_headers *frame_headers,
                       struct speed_test *speed_test,
                       struct test_interface *test_interface,
                       struct test_params *test_params);

///// Change this name
void speed_test_rx(struct app_params *app_params,
                   struct frame_headers *frame_headers,
                   struct speed_test *speed_test,
                   struct test_interface *test_interface,
                   struct test_params *test_params);
