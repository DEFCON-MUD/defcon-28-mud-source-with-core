inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 32, 1 }));
  set_short( "Corridor - x59y32z1" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y32z1.c",
  "north" : DIR+"/rooms/x59y33z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
