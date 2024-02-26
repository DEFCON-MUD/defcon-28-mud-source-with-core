inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 1 }));
  set_short( "Hallway - x25y28z1" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y28z1.c",
  "north" : DIR+"/rooms/x25y29z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
