inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 56, 6 }));
  set_short( "Corridor - x33y56z6" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y56z6.c",
  "north" : DIR+"/rooms/x33y57z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
