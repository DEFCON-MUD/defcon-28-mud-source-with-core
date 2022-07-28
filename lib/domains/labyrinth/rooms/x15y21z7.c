inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 21, 7 }));
  set_short( "Passage - x15y21z7" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y22z7.c",
  "south" : DIR+"/rooms/x15y20z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
