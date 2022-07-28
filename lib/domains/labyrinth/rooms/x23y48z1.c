inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 1 }));
  set_short( "Hallway - x23y48z1" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y48z1.c",
  "north" : DIR+"/rooms/x23y49z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
