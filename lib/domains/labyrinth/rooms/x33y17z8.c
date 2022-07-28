inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 17, 8 }));
  set_short( "Passage - x33y17z8" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y18z8.c",
  "south" : DIR+"/rooms/x33y16z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
