inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 8 }));
  set_short( "Hallway - x39y2z8" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y2z8.c",
  "east" : DIR+"/rooms/x40y2z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
