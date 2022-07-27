inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 64, 7 }));
  set_short( "Hallway - x2y64z7" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x3y64z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
