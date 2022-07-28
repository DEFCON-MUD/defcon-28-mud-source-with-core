inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 34, 8 }));
  set_short( "Hallway - x54y34z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y34z8.c",
  "east" : DIR+"/rooms/x55y34z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
