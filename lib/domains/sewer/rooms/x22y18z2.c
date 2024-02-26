inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 18, 2 }));
  set_short( "Passage - x22y18z2" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y18z2.c",
  "east" : DIR+"/rooms/x23y18z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
