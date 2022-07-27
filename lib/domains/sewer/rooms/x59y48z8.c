inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 8 }));
  set_short( "Passage - x59y48z8" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y48z8.c",
  "north" : DIR+"/rooms/x59y49z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
