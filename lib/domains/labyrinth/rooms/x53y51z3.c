inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 51, 3 }));
  set_short( "Corridor - x53y51z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y52z3.c",
  "south" : DIR+"/rooms/x53y50z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
