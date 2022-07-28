inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 57, 9 }));
  set_short( "Passage - x21y57z9" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y58z9.c",
  "south" : DIR+"/rooms/x21y56z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
