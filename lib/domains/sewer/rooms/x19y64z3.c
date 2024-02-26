inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 64, 3 }));
  set_short( "Passage - x19y64z3" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y64z3.c",
  "east" : DIR+"/rooms/x20y64z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
