inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 10, 1 }));
  set_short( "Hallway - x11y10z1" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y10z1.c",
  "south" : DIR+"/rooms/x11y9z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
