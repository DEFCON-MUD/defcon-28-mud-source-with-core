inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 64, 5 }));
  set_short( "Corridor - x42y64z5" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y64z5.c",
  "east" : DIR+"/rooms/x43y64z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
