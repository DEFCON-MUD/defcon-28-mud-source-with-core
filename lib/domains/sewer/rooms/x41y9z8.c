inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 9, 8 }));
  set_short( "Corridor - x41y9z8" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y10z8.c",
  "south" : DIR+"/rooms/x41y8z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
