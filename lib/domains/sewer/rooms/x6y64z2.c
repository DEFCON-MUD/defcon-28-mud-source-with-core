inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 64, 2 }));
  set_short( "Passage - x6y64z2" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y64z2.c",
  "east" : DIR+"/rooms/x7y64z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
