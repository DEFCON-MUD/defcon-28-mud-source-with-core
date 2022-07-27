inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 0 }));
  set_short( "Corridor - x31y20z0" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y20z0.c",
  "north" : DIR+"/rooms/x31y21z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
