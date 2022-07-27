inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 1 }));
  set_short( "Corridor - x13y22z1" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z1.c",
  "east" : DIR+"/rooms/x14y22z1.c",
  "north" : DIR+"/rooms/x13y23z1.c",
  "south" : DIR+"/rooms/x13y21z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
