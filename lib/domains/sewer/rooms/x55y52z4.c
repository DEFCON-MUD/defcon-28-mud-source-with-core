inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 4 }));
  set_short( "Corridor - x55y52z4" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y52z4.c",
  "south" : DIR+"/rooms/x55y51z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
