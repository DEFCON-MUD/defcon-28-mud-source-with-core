inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 2, 3 }));
  set_short( "Corridor - x29y2z3" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y2z3.c",
  "east" : DIR+"/rooms/x30y2z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
