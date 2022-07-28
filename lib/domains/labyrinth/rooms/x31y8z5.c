inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 8, 5 }));
  set_short( "Passage - x31y8z5" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y8z5.c",
  "north" : DIR+"/rooms/x31y9z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
