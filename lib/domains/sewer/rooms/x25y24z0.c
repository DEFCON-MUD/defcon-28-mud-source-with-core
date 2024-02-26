inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 24, 0 }));
  set_short( "Corridor - x25y24z0" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y25z0.c",
  "south" : DIR+"/rooms/x25y23z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
