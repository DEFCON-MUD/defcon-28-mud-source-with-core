inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 3 }));
  set_short( "Hallway - x51y36z3" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y36z3.c",
  "east" : DIR+"/rooms/x52y36z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
