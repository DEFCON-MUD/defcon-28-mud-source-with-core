inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 62, 2 }));
  set_short( "Passage - x24y62z2" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y62z2.c",
  "east" : DIR+"/rooms/x25y62z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
