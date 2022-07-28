inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 6, 6 }));
  set_short( "Corridor - x61y6z6" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y7z6.c",
  "south" : DIR+"/rooms/x61y5z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
