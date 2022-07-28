inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 51, 3 }));
  set_short( "Hallway - x61y51z3" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y52z3.c",
  "south" : DIR+"/rooms/x61y50z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
