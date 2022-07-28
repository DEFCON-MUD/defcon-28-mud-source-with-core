inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 58, 1 }));
  set_short( "Hallway - x16y58z1" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y58z1.c",
  "east" : DIR+"/rooms/x17y58z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
