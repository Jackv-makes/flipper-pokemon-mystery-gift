// SPDX-License-Identifier: GPL-3.0-or-later
// Gen II species names (pokecrystal data/pokemon/names.asm), indexed by
// National Dex number 1..251. Generated; do not edit by hand.
#pragma once
#include <stdint.h>

#define MG_SPECIES_COUNT 251

/** Name for a species id (1..251); "?" otherwise. */
const char* mg_species_name(uint8_t species);
