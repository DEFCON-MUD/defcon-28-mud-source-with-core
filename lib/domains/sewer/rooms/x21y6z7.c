inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 6, 7 }));
  set_short( "Corridor - x21y6z7" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y6z7.c",
  "south" : DIR+"/rooms/x21y5z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
