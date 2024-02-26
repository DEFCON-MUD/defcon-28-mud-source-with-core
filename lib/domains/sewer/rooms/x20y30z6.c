inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 30, 6 }));
  set_short( "Hallway - x20y30z6" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y30z6.c",
  "east" : DIR+"/rooms/x21y30z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
