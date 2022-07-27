inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 62, 8 }));
  set_short( "Hallway - x28y62z8" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y62z8.c",
  "east" : DIR+"/rooms/x29y62z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
