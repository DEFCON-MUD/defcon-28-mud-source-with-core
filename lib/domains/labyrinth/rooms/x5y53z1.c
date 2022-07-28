inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 53, 1 }));
  set_short( "Hallway - x5y53z1" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y54z1.c",
  "south" : DIR+"/rooms/x5y52z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
