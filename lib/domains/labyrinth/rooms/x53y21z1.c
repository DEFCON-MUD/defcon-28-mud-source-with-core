inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 21, 1 }));
  set_short( "Corridor - x53y21z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y22z1.c",
  "south" : DIR+"/rooms/x53y20z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
