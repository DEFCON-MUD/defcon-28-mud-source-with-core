inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 55, 7 }));
  set_short( "Hallway - x23y55z7" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y56z7.c",
  "south" : DIR+"/rooms/x23y54z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
