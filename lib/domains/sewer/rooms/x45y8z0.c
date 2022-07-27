inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 0 }));
  set_short( "Corridor - x45y8z0" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y8z0.c",
  "north" : DIR+"/rooms/x45y9z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
