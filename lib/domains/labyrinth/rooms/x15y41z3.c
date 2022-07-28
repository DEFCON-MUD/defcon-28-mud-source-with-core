inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 41, 3 }));
  set_short( "Passage - x15y41z3" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y42z3.c",
  "south" : DIR+"/rooms/x15y40z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
