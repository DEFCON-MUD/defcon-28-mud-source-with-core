inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 30, 6 }));
  set_short( "Hallway - x59y30z6" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y30z6.c",
  "east" : DIR+"/rooms/x60y30z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
