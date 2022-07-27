inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 46, 4 }));
  set_short( "Corridor - x16y46z4" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y46z4.c",
  "east" : DIR+"/rooms/x17y46z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
