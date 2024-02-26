inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 7 }));
  set_short( "Passage - x22y0z7" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z7.c",
  "east" : DIR+"/rooms/x23y0z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
