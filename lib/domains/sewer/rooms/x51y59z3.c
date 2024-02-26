inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 59, 3 }));
  set_short( "Passage - x51y59z3" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y60z3.c",
  "south" : DIR+"/rooms/x51y58z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
