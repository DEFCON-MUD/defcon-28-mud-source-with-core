inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 6 }));
  set_short( "Passage - x45y10z6" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y10z6.c",
  "north" : DIR+"/rooms/x45y11z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
