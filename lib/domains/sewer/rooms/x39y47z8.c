inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 47, 8 }));
  set_short( "Passage - x39y47z8" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y48z8.c",
  "south" : DIR+"/rooms/x39y46z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
