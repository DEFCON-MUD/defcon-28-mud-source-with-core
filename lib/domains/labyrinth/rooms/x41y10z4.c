inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 4 }));
  set_short( "Passage - x41y10z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z4.c",
  "east" : DIR+"/rooms/x42y10z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
