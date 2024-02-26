inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 5 }));
  set_short( "Hallway - x21y44z5" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y44z5.c",
  "south" : DIR+"/rooms/x21y43z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
