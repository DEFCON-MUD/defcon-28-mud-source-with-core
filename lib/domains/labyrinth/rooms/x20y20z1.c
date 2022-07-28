inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 20, 1 }));
  set_short( "Passage - x20y20z1" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y20z1.c",
  "east" : DIR+"/rooms/x21y20z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
