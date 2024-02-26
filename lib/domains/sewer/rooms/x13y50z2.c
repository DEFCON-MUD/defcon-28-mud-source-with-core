inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 2 }));
  set_short( "Passage - x13y50z2" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y50z2.c",
  "north" : DIR+"/rooms/x13y51z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
