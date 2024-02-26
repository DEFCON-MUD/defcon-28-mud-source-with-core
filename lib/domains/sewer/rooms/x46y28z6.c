inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 28, 6 }));
  set_short( "Passage - x46y28z6" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y28z6.c",
  "east" : DIR+"/rooms/x47y28z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
