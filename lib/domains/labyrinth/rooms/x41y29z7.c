inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 29, 7 }));
  set_short( "Corridor - x41y29z7" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y30z7.c",
  "south" : DIR+"/rooms/x41y28z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
