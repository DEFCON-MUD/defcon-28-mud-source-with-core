inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 28, 6 }));
  set_short( "Corridor - x40y28z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y28z6.c",
  "east" : DIR+"/rooms/x41y28z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
