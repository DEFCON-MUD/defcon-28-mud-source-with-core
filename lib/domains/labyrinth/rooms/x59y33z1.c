inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 33, 1 }));
  set_short( "Corridor - x59y33z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y34z1.c",
  "south" : DIR+"/rooms/x59y32z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
