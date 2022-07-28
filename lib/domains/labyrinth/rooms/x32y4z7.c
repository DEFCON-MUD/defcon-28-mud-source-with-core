inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 4, 7 }));
  set_short( "Passage - x32y4z7" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y4z7.c",
  "east" : DIR+"/rooms/x33y4z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
