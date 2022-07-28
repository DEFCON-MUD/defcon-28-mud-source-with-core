inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 9 }));
  set_short( "Passage - x7y44z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y44z9.c",
  "north" : DIR+"/rooms/x7y45z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
