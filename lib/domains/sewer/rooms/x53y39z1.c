inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 39, 1 }));
  set_short( "Passage - x53y39z1" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y40z1.c",
  "south" : DIR+"/rooms/x53y38z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
