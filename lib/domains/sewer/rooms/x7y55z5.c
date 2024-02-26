inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 55, 5 }));
  set_short( "Passage - x7y55z5" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y56z5.c",
  "south" : DIR+"/rooms/x7y54z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
