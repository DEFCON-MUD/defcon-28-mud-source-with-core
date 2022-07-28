inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 40, 3 }));
  set_short( "Hallway - x36y40z3" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y40z3.c",
  "east" : DIR+"/rooms/x37y40z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
