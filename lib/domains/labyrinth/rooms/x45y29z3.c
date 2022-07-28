inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 29, 3 }));
  set_short( "Passage - x45y29z3" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y30z3.c",
  "south" : DIR+"/rooms/x45y28z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
