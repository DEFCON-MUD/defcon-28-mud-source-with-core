inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 46, 1 }));
  set_short( "Passage - x24y46z1" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y46z1.c",
  "east" : DIR+"/rooms/x25y46z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
