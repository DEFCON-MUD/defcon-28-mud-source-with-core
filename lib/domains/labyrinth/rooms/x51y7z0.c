inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 7, 0 }));
  set_short( "Passage - x51y7z0" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y8z0.c",
  "south" : DIR+"/rooms/x51y6z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
