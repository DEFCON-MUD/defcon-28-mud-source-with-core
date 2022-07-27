inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 50, 4 }));
  set_short( "Hallway - x45y50z4" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y50z4.c",
  "south" : DIR+"/rooms/x45y49z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
