inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 2, 1 }));
  set_short( "Hallway - x53y2z1" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y2z1.c",
  "east" : DIR+"/rooms/x54y2z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
