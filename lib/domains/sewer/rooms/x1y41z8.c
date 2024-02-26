inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 41, 8 }));
  set_short( "Hallway - x1y41z8" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y42z8.c",
  "south" : DIR+"/rooms/x1y40z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
