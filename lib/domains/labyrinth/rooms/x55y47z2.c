inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 47, 2 }));
  set_short( "Passage - x55y47z2" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y48z2.c",
  "south" : DIR+"/rooms/x55y46z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
