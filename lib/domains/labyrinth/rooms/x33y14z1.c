inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 14, 1 }));
  set_short( "Passage - x33y14z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y14z1.c",
  "east" : DIR+"/rooms/x34y14z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
