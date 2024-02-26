inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 3, 1 }));
  set_short( "Corridor - x19y3z1" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y4z1.c",
  "south" : DIR+"/rooms/x19y2z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
