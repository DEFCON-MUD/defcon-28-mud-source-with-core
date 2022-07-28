inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 19, 7 }));
  set_short( "Corridor - x27y19z7" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y20z7.c",
  "south" : DIR+"/rooms/x27y18z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
