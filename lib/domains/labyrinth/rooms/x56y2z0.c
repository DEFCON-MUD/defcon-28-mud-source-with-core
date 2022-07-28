inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 0 }));
  set_short( "Corridor - x56y2z0" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z0.c",
  "east" : DIR+"/rooms/x57y2z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
