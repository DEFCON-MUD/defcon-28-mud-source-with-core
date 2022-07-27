inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 47, 6 }));
  set_short( "Passage - x43y47z6" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y48z6.c",
  "south" : DIR+"/rooms/x43y46z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
