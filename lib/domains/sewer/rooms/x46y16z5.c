inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 16, 5 }));
  set_short( "Hallway - x46y16z5" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y16z5.c",
  "east" : DIR+"/rooms/x47y16z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
