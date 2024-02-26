inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 9 }));
  set_short( "Hallway - x49y44z9" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y45z9.c",
  "south" : DIR+"/rooms/x49y43z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
