inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 9 }));
  set_short( "Passage - x49y48z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y48z9.c",
  "south" : DIR+"/rooms/x49y47z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
