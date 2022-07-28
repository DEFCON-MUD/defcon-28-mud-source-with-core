inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 5 }));
  set_short( "Passage - x33y4z5" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y5z5.c",
  "south" : DIR+"/rooms/x33y3z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
