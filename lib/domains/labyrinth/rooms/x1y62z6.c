inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 6 }));
  set_short( "Corridor - x1y62z6" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z6.c",
  "north" : DIR+"/rooms/x1y63z6.c",
  "south" : DIR+"/rooms/x1y61z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
