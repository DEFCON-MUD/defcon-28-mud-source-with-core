inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 2 }));
  set_short( "Hallway - x33y2z2" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y2z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
