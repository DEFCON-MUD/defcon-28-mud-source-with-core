inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 32, 4 }));
  set_short( "Passage - x57y32z4" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y32z4.c",
  "east" : DIR+"/rooms/x58y32z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
