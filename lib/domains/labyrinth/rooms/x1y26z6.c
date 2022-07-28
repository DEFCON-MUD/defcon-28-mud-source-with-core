inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 6 }));
  set_short( "Passage - x1y26z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y26z6.c",
  "south" : DIR+"/rooms/x1y25z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
