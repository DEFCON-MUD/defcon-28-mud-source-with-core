inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 8 }));
  set_short( "Corridor - x59y12z8" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y12z8.c",
  "north" : DIR+"/rooms/x59y13z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
