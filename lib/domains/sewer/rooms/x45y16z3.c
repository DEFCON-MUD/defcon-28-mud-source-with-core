inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 3 }));
  set_short( "Passage - x45y16z3" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y16z3.c",
  "south" : DIR+"/rooms/x45y15z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
