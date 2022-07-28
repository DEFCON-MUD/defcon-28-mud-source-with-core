inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 60, 1 }));
  set_short( "Passage - x60y60z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y60z1.c",
  "east" : DIR+"/rooms/x61y60z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
