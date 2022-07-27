inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 46, 0 }));
  set_short( "Corridor - x19y46z0" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y46z0.c",
  "east" : DIR+"/rooms/x20y46z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
