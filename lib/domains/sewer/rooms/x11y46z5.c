inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 5 }));
  set_short( "Hallway - x11y46z5" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y46z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
