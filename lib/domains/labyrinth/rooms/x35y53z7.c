inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 53, 7 }));
  set_short( "Hallway - x35y53z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y54z7.c",
  "south" : DIR+"/rooms/x35y52z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
