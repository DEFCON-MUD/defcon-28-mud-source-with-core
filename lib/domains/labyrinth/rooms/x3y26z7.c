inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 7 }));
  set_short( "Corridor - x3y26z7" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y26z7.c",
  "east" : DIR+"/rooms/x4y26z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
