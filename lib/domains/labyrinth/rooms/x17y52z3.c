inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 52, 3 }));
  set_short( "Passage - x17y52z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y52z3.c",
  "east" : DIR+"/rooms/x18y52z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
