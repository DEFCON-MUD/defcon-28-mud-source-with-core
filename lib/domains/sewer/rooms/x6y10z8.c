inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 10, 8 }));
  set_short( "Passage - x6y10z8" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y10z8.c",
  "east" : DIR+"/rooms/x7y10z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
