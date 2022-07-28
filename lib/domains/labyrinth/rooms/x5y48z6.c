inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 6 }));
  set_short( "Corridor - x5y48z6" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z6.c",
  "east" : DIR+"/rooms/x6y48z6.c",
  "north" : DIR+"/rooms/x5y49z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
