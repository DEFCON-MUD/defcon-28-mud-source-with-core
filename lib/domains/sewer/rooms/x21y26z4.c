inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 4 }));
  set_short( "Corridor - x21y26z4" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y27z4.c",
  "south" : DIR+"/rooms/x21y25z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
