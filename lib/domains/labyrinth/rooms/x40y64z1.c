inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 1 }));
  set_short( "Hallway - x40y64z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z1.c",
  "east" : DIR+"/rooms/x41y64z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
