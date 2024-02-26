inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 19, 6 }));
  set_short( "Corridor - x31y19z6" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y20z6.c",
  "south" : DIR+"/rooms/x31y18z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
