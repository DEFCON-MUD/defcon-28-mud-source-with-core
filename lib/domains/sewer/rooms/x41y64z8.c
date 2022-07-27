inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 64, 8 }));
  set_short( "Passage - x41y64z8" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y64z8.c",
  "east" : DIR+"/rooms/x42y64z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
