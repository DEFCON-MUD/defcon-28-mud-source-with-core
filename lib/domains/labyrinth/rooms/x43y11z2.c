inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 11, 2 }));
  set_short( "Hallway - x43y11z2" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y12z2.c",
  "south" : DIR+"/rooms/x43y10z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
