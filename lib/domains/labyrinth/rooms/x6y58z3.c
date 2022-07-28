inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 58, 3 }));
  set_short( "Hallway - x6y58z3" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y58z3.c",
  "east" : DIR+"/rooms/x7y58z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
