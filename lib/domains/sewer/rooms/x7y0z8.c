inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 8 }));
  set_short( "Corridor - x7y0z8" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z8.c",
  "east" : DIR+"/rooms/x8y0z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
