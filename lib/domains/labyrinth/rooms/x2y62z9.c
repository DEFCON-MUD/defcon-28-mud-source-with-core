inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 9 }));
  set_short( "Passage - x2y62z9" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z9.c",
  "east" : DIR+"/rooms/x3y62z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
