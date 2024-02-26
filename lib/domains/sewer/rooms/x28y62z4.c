inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 62, 4 }));
  set_short( "Hallway - x28y62z4" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y62z4.c",
  "east" : DIR+"/rooms/x29y62z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
