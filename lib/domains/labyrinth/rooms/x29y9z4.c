inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 9, 4 }));
  set_short( "Corridor - x29y9z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y10z4.c",
  "south" : DIR+"/rooms/x29y8z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
