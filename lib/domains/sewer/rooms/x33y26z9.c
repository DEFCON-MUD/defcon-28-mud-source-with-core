inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 9 }));
  set_short( "Corridor - x33y26z9" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y26z9.c",
  "south" : DIR+"/rooms/x33y25z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
