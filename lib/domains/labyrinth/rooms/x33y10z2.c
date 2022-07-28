inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 2 }));
  set_short( "Corridor - x33y10z2" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y10z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
