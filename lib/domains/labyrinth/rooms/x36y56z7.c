inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 56, 7 }));
  set_short( "Corridor - x36y56z7" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y56z7.c",
  "east" : DIR+"/rooms/x37y56z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
