inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 12, 3 }));
  set_short( "Corridor - x30y12z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y12z3.c",
  "east" : DIR+"/rooms/x31y12z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
