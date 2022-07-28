inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 10, 2 }));
  set_short( "Passage - x35y10z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y10z2.c",
  "east" : DIR+"/rooms/x36y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
