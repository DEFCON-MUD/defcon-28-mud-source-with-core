inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 48, 6 }));
  set_short( "Passage - x45y48z6" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y48z6.c",
  "north" : DIR+"/rooms/x45y49z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
