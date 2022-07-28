inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 26, 9 }));
  set_short( "Corridor - x54y26z9" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y26z9.c",
  "east" : DIR+"/rooms/x55y26z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
