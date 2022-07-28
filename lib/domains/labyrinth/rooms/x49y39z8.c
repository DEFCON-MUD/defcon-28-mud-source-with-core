inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 39, 8 }));
  set_short( "Corridor - x49y39z8" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y40z8.c",
  "south" : DIR+"/rooms/x49y38z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
