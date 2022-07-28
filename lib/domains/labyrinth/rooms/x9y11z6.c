inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 11, 6 }));
  set_short( "Corridor - x9y11z6" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y12z6.c",
  "south" : DIR+"/rooms/x9y10z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
