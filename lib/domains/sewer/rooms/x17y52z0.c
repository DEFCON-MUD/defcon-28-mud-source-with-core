inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 52, 0 }));
  set_short( "Corridor - x17y52z0" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y52z0.c",
  "east" : DIR+"/rooms/x18y52z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
