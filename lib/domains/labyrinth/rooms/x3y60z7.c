inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 60, 7 }));
  set_short( "Hallway - x3y60z7" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y60z7.c",
  "east" : DIR+"/rooms/x4y60z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
