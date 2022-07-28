inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 33, 2 }));
  set_short( "Passage - x17y33z2" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y34z2.c",
  "south" : DIR+"/rooms/x17y32z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
