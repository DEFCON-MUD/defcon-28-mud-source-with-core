inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 55, 7 }));
  set_short( "Passage - x21y55z7" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y56z7.c",
  "south" : DIR+"/rooms/x21y54z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
