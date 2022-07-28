inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 60, 9 }));
  set_short( "Corridor - x4y60z9" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y60z9.c",
  "east" : DIR+"/rooms/x5y60z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
