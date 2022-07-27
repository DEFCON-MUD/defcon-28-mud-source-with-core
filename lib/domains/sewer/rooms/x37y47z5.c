inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 47, 5 }));
  set_short( "Passage - x37y47z5" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y48z5.c",
  "south" : DIR+"/rooms/x37y46z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
