inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 9 }));
  set_short( "Passage - x59y12z9" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y12z9.c",
  "south" : DIR+"/rooms/x59y11z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
