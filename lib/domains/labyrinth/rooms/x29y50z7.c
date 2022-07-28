inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 7 }));
  set_short( "Passage - x29y50z7" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y50z7.c",
  "south" : DIR+"/rooms/x29y49z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
