inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 8 }));
  set_short( "Corridor - x7y48z8" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y48z8.c",
  "east" : DIR+"/rooms/x8y48z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
