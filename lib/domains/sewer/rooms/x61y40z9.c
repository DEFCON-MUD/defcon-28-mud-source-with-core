inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 9 }));
  set_short( "Hallway - x61y40z9" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y41z9.c",
  "south" : DIR+"/rooms/x61y39z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
