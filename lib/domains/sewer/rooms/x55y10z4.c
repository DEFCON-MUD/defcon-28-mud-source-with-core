inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 4 }));
  set_short( "Passage - x55y10z4" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y10z4.c",
  "north" : DIR+"/rooms/x55y11z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
