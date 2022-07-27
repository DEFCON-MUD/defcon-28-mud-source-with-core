inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 56, 8 }));
  set_short( "Hallway - x42y56z8" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y56z8.c",
  "east" : DIR+"/rooms/x43y56z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
