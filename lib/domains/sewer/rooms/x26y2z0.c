inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 2, 0 }));
  set_short( "Passage - x26y2z0" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y2z0.c",
  "east" : DIR+"/rooms/x27y2z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
