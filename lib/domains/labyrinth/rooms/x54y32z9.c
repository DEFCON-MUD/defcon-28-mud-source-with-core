inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 32, 9 }));
  set_short( "Passage - x54y32z9" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y32z9.c",
  "east" : DIR+"/rooms/x55y32z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
