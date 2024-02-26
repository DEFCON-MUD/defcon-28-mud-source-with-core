inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 14, 1 }));
  set_short( "Passage - x54y14z1" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y14z1.c",
  "east" : DIR+"/rooms/x55y14z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
