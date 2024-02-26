inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 14, 8 }));
  set_short( "Hallway - x46y14z8" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y14z8.c",
  "east" : DIR+"/rooms/x47y14z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
