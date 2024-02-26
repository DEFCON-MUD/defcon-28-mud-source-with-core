inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 26, 8 }));
  set_short( "Hallway - x38y26z8" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y26z8.c",
  "east" : DIR+"/rooms/x39y26z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
