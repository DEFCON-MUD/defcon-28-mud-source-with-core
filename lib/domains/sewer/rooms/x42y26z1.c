inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 26, 1 }));
  set_short( "Passage - x42y26z1" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y26z1.c",
  "east" : DIR+"/rooms/x43y26z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
