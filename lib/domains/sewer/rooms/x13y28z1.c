inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 1 }));
  set_short( "Corridor - x13y28z1" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y28z1.c",
  "north" : DIR+"/rooms/x13y29z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
