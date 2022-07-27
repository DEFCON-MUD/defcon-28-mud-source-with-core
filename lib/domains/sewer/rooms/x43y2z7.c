inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 7 }));
  set_short( "Passage - x43y2z7" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y2z7.c",
  "north" : DIR+"/rooms/x43y3z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
