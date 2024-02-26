inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 28, 3 }));
  set_short( "Hallway - x58y28z3" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y28z3.c",
  "east" : DIR+"/rooms/x59y28z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
