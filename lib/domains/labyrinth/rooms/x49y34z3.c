inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 3 }));
  set_short( "Passage - x49y34z3" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y34z3.c",
  "south" : DIR+"/rooms/x49y33z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
