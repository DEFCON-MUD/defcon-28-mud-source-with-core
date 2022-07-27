inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 7 }));
  set_short( "Hallway - x37y0z7" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z7.c",
  "east" : DIR+"/rooms/x38y0z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
