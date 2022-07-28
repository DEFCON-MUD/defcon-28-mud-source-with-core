inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 34, 0 }));
  set_short( "Hallway - x42y34z0" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y34z0.c",
  "east" : DIR+"/rooms/x43y34z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
