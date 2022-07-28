inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 30, 5 }));
  set_short( "Corridor - x13y30z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "south" : DIR+"/rooms/x13y29z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
