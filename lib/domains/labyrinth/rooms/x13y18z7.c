inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 18, 7 }));
  set_short( "Passage - x13y18z7" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y18z7.c",
  "north" : DIR+"/rooms/x13y19z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
