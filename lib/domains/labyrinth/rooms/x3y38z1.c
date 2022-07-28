inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 38, 1 }));
  set_short( "Corridor - x3y38z1" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y38z1.c",
  "east" : DIR+"/rooms/x4y38z1.c",
  "north" : DIR+"/rooms/x3y39z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
