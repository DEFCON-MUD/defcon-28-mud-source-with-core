inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 60, 1 }));
  set_short( "Corridor - x38y60z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y60z1.c",
  "east" : DIR+"/rooms/x39y60z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
