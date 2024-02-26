inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 39, 8 }));
  set_short( "Hallway - x59y39z8" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y40z8.c",
  "south" : DIR+"/rooms/x59y38z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
