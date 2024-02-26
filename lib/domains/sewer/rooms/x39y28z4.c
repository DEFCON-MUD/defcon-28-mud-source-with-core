inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 4 }));
  set_short( "Hallway - x39y28z4" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y29z4.c",
  "south" : DIR+"/rooms/x39y27z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
