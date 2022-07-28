inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 28, 8 }));
  set_short( "Passage - x2y28z8" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y28z8.c",
  "east" : DIR+"/rooms/x3y28z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
