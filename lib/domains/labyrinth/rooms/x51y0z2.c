inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 0, 2 }));
  set_short( "Hallway - x51y0z2" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y0z2.c",
  "east" : DIR+"/rooms/x52y0z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
