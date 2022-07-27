inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 2 }));
  set_short( "Hallway - x13y16z2" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y16z2.c",
  "north" : DIR+"/rooms/x13y17z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
