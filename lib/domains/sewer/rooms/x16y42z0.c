inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 42, 0 }));
  set_short( "Corridor - x16y42z0" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y42z0.c",
  "east" : DIR+"/rooms/x17y42z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
