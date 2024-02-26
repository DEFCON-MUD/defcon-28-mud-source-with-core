inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 0 }));
  set_short( "Corridor - x37y46z0" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y46z0.c",
  "south" : DIR+"/rooms/x37y45z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
