inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 8 }));
  set_short( "Hallway - x23y32z8" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y32z8.c",
  "north" : DIR+"/rooms/x23y33z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
