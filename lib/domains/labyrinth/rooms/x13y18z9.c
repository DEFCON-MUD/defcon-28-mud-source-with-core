inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 18, 9 }));
  set_short( "Corridor - x13y18z9" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y19z9.c",
  "south" : DIR+"/rooms/x13y17z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
