inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 27, 5 }));
  set_short( "Hallway - x55y27z5" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y28z5.c",
  "south" : DIR+"/rooms/x55y26z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
