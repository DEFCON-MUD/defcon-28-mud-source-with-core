inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 1 }));
  set_short( "Passage - x31y32z1" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y32z1.c",
  "east" : DIR+"/rooms/x32y32z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
