inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 44, 7 }));
  set_short( "Hallway - x27y44z7" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y44z7.c",
  "south" : DIR+"/rooms/x27y43z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
