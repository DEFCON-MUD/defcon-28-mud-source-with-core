inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 0, 0 }));
  set_short( "Hallway - x55y0z0" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y0z0.c",
  "east" : DIR+"/rooms/x56y0z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
