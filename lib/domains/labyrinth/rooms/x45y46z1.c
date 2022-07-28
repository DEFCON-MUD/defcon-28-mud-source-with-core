inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 1 }));
  set_short( "Passage - x45y46z1" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y46z1.c",
  "east" : DIR+"/rooms/x46y46z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
