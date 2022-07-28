inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 58, 2 }));
  set_short( "Hallway - x55y58z2" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y58z2.c",
  "east" : DIR+"/rooms/x56y58z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
