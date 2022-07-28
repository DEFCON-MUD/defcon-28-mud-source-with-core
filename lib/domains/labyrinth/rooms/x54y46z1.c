inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 46, 1 }));
  set_short( "Corridor - x54y46z1" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y46z1.c",
  "east" : DIR+"/rooms/x55y46z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
