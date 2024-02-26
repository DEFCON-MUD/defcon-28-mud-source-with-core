inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 3 }));
  set_short( "Hallway - x3y62z3" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z3.c",
  "east" : DIR+"/rooms/x4y62z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
