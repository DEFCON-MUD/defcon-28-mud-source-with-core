inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 2 }));
  set_short( "Passage - x23y8z2" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y8z2.c",
  "north" : DIR+"/rooms/x23y9z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
