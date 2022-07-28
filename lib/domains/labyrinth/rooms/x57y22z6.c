inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 22, 6 }));
  set_short( "Passage - x57y22z6" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y23z6.c",
  "south" : DIR+"/rooms/x57y21z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
