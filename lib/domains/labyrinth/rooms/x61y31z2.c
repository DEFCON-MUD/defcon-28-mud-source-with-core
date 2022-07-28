inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 2 }));
  set_short( "Passage - x61y31z2" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z2.c",
  "south" : DIR+"/rooms/x61y30z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
