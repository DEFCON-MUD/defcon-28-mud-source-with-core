inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 2 }));
  set_short( "Passage - x57y30z2" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y30z2.c",
  "north" : DIR+"/rooms/x57y31z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
