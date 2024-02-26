inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 4 }));
  set_short( "Hallway - x21y38z4" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y38z4.c",
  "south" : DIR+"/rooms/x21y37z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
