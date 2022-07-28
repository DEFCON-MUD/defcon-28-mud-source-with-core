inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 3 }));
  set_short( "Passage - x11y36z3" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y37z3.c",
  "south" : DIR+"/rooms/x11y35z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
