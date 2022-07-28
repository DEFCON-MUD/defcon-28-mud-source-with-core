inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 8, 9 }));
  set_short( "Passage - x54y8z9" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y8z9.c",
  "east" : DIR+"/rooms/x55y8z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
