inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 59, 7 }));
  set_short( "Passage - x33y59z7" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y60z7.c",
  "south" : DIR+"/rooms/x33y58z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
