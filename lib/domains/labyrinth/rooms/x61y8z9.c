inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 8, 9 }));
  set_short( "Passage - x61y8z9" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y8z9.c",
  "north" : DIR+"/rooms/x61y9z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
