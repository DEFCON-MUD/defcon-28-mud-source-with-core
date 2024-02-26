inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 2 }));
  set_short( "Passage - x9y46z2" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y47z2.c",
  "south" : DIR+"/rooms/x9y45z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
