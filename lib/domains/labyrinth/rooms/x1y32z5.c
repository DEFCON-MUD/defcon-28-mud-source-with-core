inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 32, 5 }));
  set_short( "Passage - x1y32z5" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y32z5.c",
  "south" : DIR+"/rooms/x1y31z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
