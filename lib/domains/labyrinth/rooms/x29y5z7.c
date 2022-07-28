inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 5, 7 }));
  set_short( "Passage - x29y5z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y6z7.c",
  "south" : DIR+"/rooms/x29y4z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
