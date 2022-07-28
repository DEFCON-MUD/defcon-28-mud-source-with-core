inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 2 }));
  set_short( "Corridor - x35y20z2" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y20z2.c",
  "north" : DIR+"/rooms/x35y21z2.c",
  "south" : DIR+"/rooms/x35y19z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
