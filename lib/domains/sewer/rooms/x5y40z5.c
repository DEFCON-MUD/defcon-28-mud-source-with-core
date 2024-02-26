inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 40, 5 }));
  set_short( "Passage - x5y40z5" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y41z5.c",
  "south" : DIR+"/rooms/x5y39z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
