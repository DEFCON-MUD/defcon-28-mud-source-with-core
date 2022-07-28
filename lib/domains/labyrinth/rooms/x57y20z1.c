inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 1 }));
  set_short( "Corridor - x57y20z1" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y20z1.c",
  "north" : DIR+"/rooms/x57y21z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
