inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 36, 5 }));
  set_short( "Hallway - x45y36z5" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y37z5.c",
  "south" : DIR+"/rooms/x45y35z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
