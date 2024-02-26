inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 2 }));
  set_short( "Passage - x55y41z2" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z2.c",
  "south" : DIR+"/rooms/x55y40z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
