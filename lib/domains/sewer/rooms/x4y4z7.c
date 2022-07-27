inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 4, 7 }));
  set_short( "Corridor - x4y4z7" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y4z7.c",
  "east" : DIR+"/rooms/x5y4z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
