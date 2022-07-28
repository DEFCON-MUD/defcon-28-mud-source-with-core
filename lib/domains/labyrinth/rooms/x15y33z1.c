inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 33, 1 }));
  set_short( "Corridor - x15y33z1" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y34z1.c",
  "south" : DIR+"/rooms/x15y32z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
