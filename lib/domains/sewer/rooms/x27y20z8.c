inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 8 }));
  set_short( "Passage - x27y20z8" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y20z8.c",
  "north" : DIR+"/rooms/x27y21z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
