inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 64, 3 }));
  set_short( "Passage - x51y64z3" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y64z3.c",
  "east" : DIR+"/rooms/x52y64z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
