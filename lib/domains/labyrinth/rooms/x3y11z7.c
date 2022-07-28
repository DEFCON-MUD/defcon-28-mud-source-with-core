inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 7 }));
  set_short( "Hallway - x3y11z7" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z7.c",
  "south" : DIR+"/rooms/x3y10z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
