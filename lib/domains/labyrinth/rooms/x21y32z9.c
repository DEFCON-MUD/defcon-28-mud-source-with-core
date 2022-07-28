inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 32, 9 }));
  set_short( "Passage - x21y32z9" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y32z9.c",
  "north" : DIR+"/rooms/x21y33z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
