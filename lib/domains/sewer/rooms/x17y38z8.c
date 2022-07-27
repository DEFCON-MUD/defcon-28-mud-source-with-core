inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 8 }));
  set_short( "Passage - x17y38z8" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y38z8.c",
  "east" : DIR+"/rooms/x18y38z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
