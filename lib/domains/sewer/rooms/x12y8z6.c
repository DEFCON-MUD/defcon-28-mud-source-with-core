inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 8, 6 }));
  set_short( "Hallway - x12y8z6" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y8z6.c",
  "east" : DIR+"/rooms/x13y8z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
