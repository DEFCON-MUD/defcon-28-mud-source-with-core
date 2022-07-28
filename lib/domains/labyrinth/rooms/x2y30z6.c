inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 30, 6 }));
  set_short( "Corridor - x2y30z6" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y30z6.c",
  "east" : DIR+"/rooms/x3y30z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
