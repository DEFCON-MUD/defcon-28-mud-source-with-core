inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 9 }));
  set_short( "Hallway - x21y12z9" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z9.c",
  "east" : DIR+"/rooms/x22y12z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
