inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 62, 3 }));
  set_short( "Hallway - x13y62z3" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y62z3.c",
  "east" : DIR+"/rooms/x14y62z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
