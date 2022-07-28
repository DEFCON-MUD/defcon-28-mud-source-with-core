inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 16, 1 }));
  set_short( "Passage - x16y16z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y16z1.c",
  "east" : DIR+"/rooms/x17y16z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
