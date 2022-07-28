inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 51, 0 }));
  set_short( "Hallway - x55y51z0" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y52z0.c",
  "south" : DIR+"/rooms/x55y50z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
