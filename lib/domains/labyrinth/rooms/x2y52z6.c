inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 52, 6 }));
  set_short( "Hallway - x2y52z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y52z6.c",
  "east" : DIR+"/rooms/x3y52z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
