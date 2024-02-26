inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 5 }));
  set_short( "Corridor - x17y4z5" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y4z5.c",
  "north" : DIR+"/rooms/x17y5z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
