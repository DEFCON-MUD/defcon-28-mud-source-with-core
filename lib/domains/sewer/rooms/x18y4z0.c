inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 4, 0 }));
  set_short( "Hallway - x18y4z0" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y4z0.c",
  "east" : DIR+"/rooms/x19y4z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
