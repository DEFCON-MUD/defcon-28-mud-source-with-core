inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 27, 4 }));
  set_short( "Hallway - x39y27z4" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y28z4.c",
  "south" : DIR+"/rooms/x39y26z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
