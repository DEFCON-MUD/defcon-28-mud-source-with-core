inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 2, 8 }));
  set_short( "Passage - x31y2z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y2z8.c",
  "north" : DIR+"/rooms/x31y3z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
