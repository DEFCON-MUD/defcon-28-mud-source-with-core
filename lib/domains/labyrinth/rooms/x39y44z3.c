inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 3 }));
  set_short( "Passage - x39y44z3" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y44z3.c",
  "east" : DIR+"/rooms/x40y44z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
