inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 6 }));
  set_short( "Corridor - x57y30z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y30z6.c",
  "east" : DIR+"/rooms/x58y30z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
