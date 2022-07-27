inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 21, 9 }));
  set_short( "Hallway - x15y21z9" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y22z9.c",
  "south" : DIR+"/rooms/x15y20z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
