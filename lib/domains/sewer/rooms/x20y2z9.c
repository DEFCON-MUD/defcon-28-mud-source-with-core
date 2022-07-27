inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 2, 9 }));
  set_short( "Corridor - x20y2z9" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y2z9.c",
  "east" : DIR+"/rooms/x21y2z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
