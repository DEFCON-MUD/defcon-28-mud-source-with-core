inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 7 }));
  set_short( "Hallway - x39y20z7" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y21z7.c",
  "south" : DIR+"/rooms/x39y19z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
