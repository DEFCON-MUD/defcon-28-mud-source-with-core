inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 0, 0 }));
  set_short( "Passage - x31y0z0" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y0z0.c",
  "east" : DIR+"/rooms/x32y0z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
