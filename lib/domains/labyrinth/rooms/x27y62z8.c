inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 62, 8 }));
  set_short( "Passage - x27y62z8" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y62z8.c",
  "south" : DIR+"/rooms/x27y61z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
