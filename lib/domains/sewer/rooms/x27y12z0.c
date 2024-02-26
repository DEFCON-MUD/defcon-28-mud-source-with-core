inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 0 }));
  set_short( "Hallway - x27y12z0" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y12z0.c",
  "south" : DIR+"/rooms/x27y11z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
