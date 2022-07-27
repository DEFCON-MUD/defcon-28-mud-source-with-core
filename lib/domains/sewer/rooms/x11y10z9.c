inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 10, 9 }));
  set_short( "Corridor - x11y10z9" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y10z9.c",
  "north" : DIR+"/rooms/x11y11z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
