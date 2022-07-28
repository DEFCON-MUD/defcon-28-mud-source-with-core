inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 37, 8 }));
  set_short( "Passage - x45y37z8" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y38z8.c",
  "south" : DIR+"/rooms/x45y36z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
