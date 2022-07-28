inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 42, 2 }));
  set_short( "Hallway - x7y42z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y42z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
