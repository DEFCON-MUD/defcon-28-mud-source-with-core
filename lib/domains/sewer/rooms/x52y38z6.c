inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 38, 6 }));
  set_short( "Passage - x52y38z6" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y38z6.c",
  "east" : DIR+"/rooms/x53y38z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
