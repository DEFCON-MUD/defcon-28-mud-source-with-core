inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 0 }));
  set_short( "Hallway - x21y22z0" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y22z0.c",
  "south" : DIR+"/rooms/x21y21z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
