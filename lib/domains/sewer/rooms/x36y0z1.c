inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 0, 1 }));
  set_short( "Passage - x36y0z1" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y0z1.c",
  "east" : DIR+"/rooms/x37y0z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
