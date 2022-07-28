inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 31, 2 }));
  set_short( "Hallway - x41y31z2" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y32z2.c",
  "south" : DIR+"/rooms/x41y30z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
