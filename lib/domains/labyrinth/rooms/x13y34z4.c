inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 4 }));
  set_short( "Corridor - x13y34z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y34z4.c",
  "north" : DIR+"/rooms/x13y35z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
