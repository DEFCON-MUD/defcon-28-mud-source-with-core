inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 52, 2 }));
  set_short( "Passage - x51y52z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y52z2.c",
  "north" : DIR+"/rooms/x51y53z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
