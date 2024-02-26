inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 7 }));
  set_short( "Hallway - x21y40z7" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y40z7.c",
  "east" : DIR+"/rooms/x22y40z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
