inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 59, 7 }));
  set_short( "Hallway - x5y59z7" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y60z7.c",
  "south" : DIR+"/rooms/x5y58z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
