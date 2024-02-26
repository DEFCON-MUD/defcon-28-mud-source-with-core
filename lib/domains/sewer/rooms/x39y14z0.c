inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 14, 0 }));
  set_short( "Corridor - x39y14z0" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y14z0.c",
  "east" : DIR+"/rooms/x40y14z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
