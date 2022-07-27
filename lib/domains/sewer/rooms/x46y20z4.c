inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 20, 4 }));
  set_short( "Passage - x46y20z4" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y20z4.c",
  "east" : DIR+"/rooms/x47y20z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
