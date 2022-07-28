inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 4 }));
  set_short( "Passage - x22y46z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z4.c",
  "east" : DIR+"/rooms/x23y46z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
