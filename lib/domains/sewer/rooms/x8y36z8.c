inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 36, 8 }));
  set_short( "Corridor - x8y36z8" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y36z8.c",
  "east" : DIR+"/rooms/x9y36z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
