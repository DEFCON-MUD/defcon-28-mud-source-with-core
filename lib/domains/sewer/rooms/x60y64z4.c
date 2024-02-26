inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 4 }));
  set_short( "Hallway - x60y64z4" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z4.c",
  "east" : DIR+"/rooms/x61y64z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
