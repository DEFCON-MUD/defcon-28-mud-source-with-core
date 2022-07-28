inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 0, 3 }));
  set_short( "Passage - x42y0z3" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y0z3.c",
  "east" : DIR+"/rooms/x43y0z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
