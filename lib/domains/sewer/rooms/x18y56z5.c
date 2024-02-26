inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 56, 5 }));
  set_short( "Passage - x18y56z5" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y56z5.c",
  "east" : DIR+"/rooms/x19y56z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
