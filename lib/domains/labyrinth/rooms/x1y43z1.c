inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 43, 1 }));
  set_short( "Corridor - x1y43z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y44z1.c",
  "south" : DIR+"/rooms/x1y42z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
