inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 22, 6 }));
  set_short( "Hallway - x43y22z6" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y22z6.c",
  "north" : DIR+"/rooms/x43y23z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
