inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 5 }));
  set_short( "Hallway - x31y50z5" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y51z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north.%^RESET%^");
}
