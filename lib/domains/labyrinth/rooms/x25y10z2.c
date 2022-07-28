inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 10, 2 }));
  set_short( "Hallway - x25y10z2" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y10z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
