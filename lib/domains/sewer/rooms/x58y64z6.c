inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 64, 6 }));
  set_short( "Passage - x58y64z6" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y64z6.c",
  "east" : DIR+"/rooms/x59y64z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
