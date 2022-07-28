inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 8, 3 }));
  set_short( "Hallway - x6y8z3" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y8z3.c",
  "east" : DIR+"/rooms/x7y8z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
