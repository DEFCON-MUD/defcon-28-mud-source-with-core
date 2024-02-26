inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 19, 8 }));
  set_short( "Corridor - x47y19z8" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y20z8.c",
  "south" : DIR+"/rooms/x47y18z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
