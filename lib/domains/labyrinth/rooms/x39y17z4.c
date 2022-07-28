inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 17, 4 }));
  set_short( "Corridor - x39y17z4" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y18z4.c",
  "south" : DIR+"/rooms/x39y16z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
