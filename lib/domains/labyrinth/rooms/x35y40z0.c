inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 40, 0 }));
  set_short( "Passage - x35y40z0" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y40z0.c",
  "south" : DIR+"/rooms/x35y39z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
