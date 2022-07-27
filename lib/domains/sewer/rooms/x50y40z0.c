inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 40, 0 }));
  set_short( "Corridor - x50y40z0" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y40z0.c",
  "east" : DIR+"/rooms/x51y40z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
