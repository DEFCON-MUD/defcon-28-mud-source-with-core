inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 40, 7 }));
  set_short( "Passage - x15y40z7" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y40z7.c",
  "south" : DIR+"/rooms/x15y39z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
