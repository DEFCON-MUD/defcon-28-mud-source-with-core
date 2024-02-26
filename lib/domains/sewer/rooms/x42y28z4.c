inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 28, 4 }));
  set_short( "Hallway - x42y28z4" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y28z4.c",
  "east" : DIR+"/rooms/x43y28z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
