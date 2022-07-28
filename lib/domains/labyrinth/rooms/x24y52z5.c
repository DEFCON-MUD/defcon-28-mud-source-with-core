inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 52, 5 }));
  set_short( "Hallway - x24y52z5" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y52z5.c",
  "east" : DIR+"/rooms/x25y52z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
