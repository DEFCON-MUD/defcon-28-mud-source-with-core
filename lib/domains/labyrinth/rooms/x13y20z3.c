inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 20, 3 }));
  set_short( "Hallway - x13y20z3" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y20z3.c",
  "south" : DIR+"/rooms/x13y19z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
