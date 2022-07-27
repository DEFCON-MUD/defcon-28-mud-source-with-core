inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 54, 1 }));
  set_short( "Hallway - x61y54z1" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y54z1.c",
  "north" : DIR+"/rooms/x61y55z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
