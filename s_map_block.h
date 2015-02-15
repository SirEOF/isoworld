#pragma once

typedef struct s_map_block s_map_block;
#include "c_tile.h"

enum terrain_type
{
    TERRAIN_ANY,
    TERRAIN_NONE,
    TERRAIN_MOUNTAIN,
    TERRAIN_LAKE_TEMP_FRESH,
    TERRAIN_LAKE_TEMP_BRACK,
    TERRAIN_LAKE_TEMP_SALT,
    TERRAIN_LAKE_TROP_FRESH,
    TERRAIN_LAKE_TROP_BRACK,
    TERRAIN_LAKE_TROP_SALT,
    TERRAIN_OCEAN_ARCT,
    TERRAIN_OCEAN_TROP,
    TERRAIN_OCEAN_TEMP,
    TERRAIN_GLACIER,
    TERRAIN_TUNDRA,
    TERRAIN_SWAMP_TEMP_FRESH,
    TERRAIN_SWAMP_TEMP_SALT,
    TERRAIN_MARSH_TEMP_FRESH,
    TERRAIN_MARSH_TEMP_SALT,
    TERRAIN_SWAMP_TROP_FRESH,
    TERRAIN_SWAMP_TROP_SALT,
    TERRAIN_SWAMP_MANGROVE,
    TERRAIN_MARSH_TROP_FRESH,
    TERRAIN_MARSH_TROP_SALT,
    TERRAIN_FOREST_TAIGA,
    TERRAIN_FOREST_TEMP_FIR,
    TERRAIN_FOREST_TEMP_BROAD,
    TERRAIN_FOREST_TROP_FIR,
    TERRAIN_FOREST_TROP_BROAD_DRY,
    TERRAIN_FOREST_TROP_BROAD_MOIST,
    TERRAIN_GRASS_TEMP,
    TERRAIN_SAV_TEMP,
    TERRAIN_SHRUB_TEMP,
    TERRAIN_GRASS_TROP,
    TERRAIN_SAV_TROP,
    TERRAIN_SHRUB_TROP,
    TERRAIN_DESERT_BAD,
    TERRAIN_DESERT_SAND,
    TERRAIN_DESERT_ROCK,
    //following are special types
    TERRAIN_MOUNTAIN_TALL,
    TERRAIN_BEACH_ARCT,
    TERRAIN_BEACH_TROP,
    TERRAIN_BEACH_TEMP,
    TERRAIN_COUNT
};

enum structure_type{
    STRUCTURE_ANY,
    STRUCTURE_NONE,
    STRUCTURE_CASTLE,
    STRUCTURE_VILLAGE,
    STRUCTURE_CROPS1,
    STRUCTURE_CROPS2,
    STRUCTURE_CROPS3,
    STRUCTURE_PASTURE,
    STRUCTURE_MEADOW,
    STRUCTURE_WOODLAND,
    STRUCTURE_ORCHARD,
    STRUCTURE_TUNNEL,
    STRUCTURE_BRIDGE_STONE,
    STRUCTURE_BRIDGE_OTHER,
    STRUCTURE_ROAD_STONE,
    STRUCTURE_ROAD_OTHER,
    STRUCTURE_WALL_STONE,
    STRUCTURE_WALL_OTHER,
    STRUCTURE_RIVER,
    STRUCTURE_BROOK,
    STRUCTURE_COUNT
};

struct s_map_block
{
    int height;
    int water_height;
    unsigned char levels[7];
    c_tile * sprite;
    c_tile * structure_sprite;
    ALLEGRO_COLOR biome_color;
    ALLEGRO_COLOR combined_color;
    ALLEGRO_COLOR structure_color;
    ALLEGRO_COLOR trade_color;
    terrain_type terrain;
    structure_type structure;
    unsigned char terrain_borders[TERRAIN_COUNT];
    unsigned char structure_borders[STRUCTURE_COUNT];
    double random;
    ALLEGRO_COLOR light;
};