inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 38, 2 }));
  set_short( "Passage - x29y38z2" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y38z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
