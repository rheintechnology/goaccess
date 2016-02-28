/**
 * Copyright (C) 2009-2014 by Gerardo Orellana <goaccess@prosoftcorp.com>
 * GoAccess - An Ncurses apache weblog analyzer & interactive viewer
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * A copy of the GNU General Public License is attached to this
 * source distribution for its full text.
 *
 * Visit http://goaccess.prosoftcorp.com for new releases.
 */

#if HAVE_CONFIG_H
#include <config.h>
#endif

#ifndef OUTPUT_H_INCLUDED
#define OUTPUT_H_INCLUDED

#define OUTPUT_N  10
#define REP_TITLE "Server Statistics"

#include "commons.h"
#include "parser.h"

#define GO_LOGO "" \
 "iVBORw0KGgoAAAANSUhEUgAAAMgAAABSCAMAAAAme2uJAAAAMFBMVEXx7+7m5udqjafZ2+DNz9WV" \
 "qbxycn9XhKCruce/xM2Am7KkoaqUkpy1sbiBgIwnb49WC4y0AAAEGUlEQVR42u2a63ajOgyFLUu+" \
 "SFz6/m87wyRmG5sJbWatk5DD/oOLLFmfkcDtqrt06dKl/0DD5E4nlpvo7CBxvGmOceAfg8gbgVAZ" \
 "0RD1hyASp7cCKeKoP3wiA70XCEjO2CMAgT4GZJRPAdEPAZnpM0Co7hEd53kQV4uncR6n6p7UV4Xx" \
 "1SDztILwPCrxNI8OGhawBYZW7+LITubhj8PwehBekxgmjnLvmpWEVrNGaUFEyr1XkUSVRToN86w4" \
 "osy8TiijEY0jsQEZJRK25jUg47AoDsp1DaGipvtQZtgLFEDGAc7Di0oL6SKXSN0LYJb+rQCQMgDx" \
 "q3okygaknoEL1ILMNeRLQSTWIGOXMyNVPB+ADA56FQjKHiB9XhrnWlG3INP7gFAkgEw9yOh6AUTf" \
 "BgT9vg9C8zlA0O89CC4nAZH4CGTWk4CgZfdBJJ4HhCLtgwATpG8Lgn7vQXBoxEnyjUHQ7z0IjvGk" \
 "Q5zesLTU1eIbiHA7A79YzaNSY+scLl26dOl/Kv43d3obEE//5s4XyAVygbwGhPlDQEK+QC6QC+Rv" \
 "ohBC8uG3Svhs3ntTV0uC/63AAGFLm1m8DNWn2yyIssEVIDtWiJfVkkkJ6zLVAd2+RMQC/u+FfeZb" \
 "LIKv2WIlTbmABC+Lr9kaxhwtCS2ztIqe/oQj9aEBaa1QTrqsJubJibUlk8O3SksTl0XWEae8EvEN" \
 "JJRoVgbsyd8BKMka2RPSI4A8sDozQjI3EE5INvF3QCgRmHxZWNoiV7+OiwN5RFErm4F5dTx+ZM2G" \
 "m+zFquzBdAhi2UGmiLwF8exaD0redXSJt/wA2bNiK5GZGeoJuR6CEHCxY4l6EIw13F2/tGlnLI/o" \
 "R1bkUqIajMjmEESsD03etUJrwoW+uHuW1tQkQDAJSrTzajdDRCx3CJIz1Uoo+KZH6jIuIG3AfvdM" \
 "ALJrBSxqCwAAOgSx5DeCEUImW5C0A9KtA/c9axMG2whsmPdBMOiUd0DoSRBtQXrrHghCajgG+ds8" \
 "sadBPDd+jMu+db+0EN/zAQiy6kTpaZCgD5q9t+7heQMnFjkC2f9sJnkWRLb7oh4p7Vr7lzJ/Wf2e" \
 "z/kQBNE6SXoSBF9L7BJAeiuuWCkbJhwfuyVUnkixhLTwLAghqypvz4+sUkXPJoagyt4dCBNoLUpZ" \
 "S4qsxGYv3wUpQcqIU0C1P7Li3EpmrgJhH/QIJKQgmcs51LJo8HW2miwzZ0vifgbiKKSgLKG4Nv18" \
 "s94DI6RlYQ0+bz/HPrlDSQiZ1h+yBWmqkbNZLqttbLRzk6gaL+GUO4/eCpEGC1r3PsYnVcjNh+as" \
 "Mqk/aCdWovqsdF7l0Lz0TySl/QfCdraHkAQftYz7drpW5xTYuebvSmT5jJ1h3lv9ZzvzJu6kInfp" \
 "0qVLq34BSiUfap1kucoAAAAASUVORK5CYII="

void output_html (GLog * logger, GHolder * holder);

#endif
