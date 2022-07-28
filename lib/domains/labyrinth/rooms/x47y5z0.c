inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 5, 0 }));
  set_short( "Passage - x47y5z0" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y6z0.c",
  "south" : DIR+"/rooms/x47y4z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
