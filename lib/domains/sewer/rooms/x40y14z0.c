inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 14, 0 }));
  set_short( "Hallway - x40y14z0" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y14z0.c",
  "east" : DIR+"/rooms/x41y14z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
