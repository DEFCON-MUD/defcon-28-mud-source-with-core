inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 39, 7 }));
  set_short( "Hallway - x7y39z7" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y40z7.c",
  "south" : DIR+"/rooms/x7y38z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
