inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 32, 9 }));
  set_short( "Passage - x43y32z9" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y32z9.c",
  "north" : DIR+"/rooms/x43y33z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
