inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 4 }));
  set_short( "Passage - x39y4z4" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y4z4.c",
  "south" : DIR+"/rooms/x39y3z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
