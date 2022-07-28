inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 37, 4 }));
  set_short( "Passage - x3y37z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y38z4.c",
  "south" : DIR+"/rooms/x3y36z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
