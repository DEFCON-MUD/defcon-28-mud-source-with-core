inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 36, 2 }));
  set_short( "Hallway - x26y36z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y36z2.c",
  "east" : DIR+"/rooms/x27y36z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
