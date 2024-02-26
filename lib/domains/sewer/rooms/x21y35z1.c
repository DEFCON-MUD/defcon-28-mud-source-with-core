inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 35, 1 }));
  set_short( "Passage - x21y35z1" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y36z1.c",
  "south" : DIR+"/rooms/x21y34z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
