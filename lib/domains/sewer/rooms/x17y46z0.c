inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 46, 0 }));
  set_short( "Hallway - x17y46z0" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y46z0.c",
  "east" : DIR+"/rooms/x18y46z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
