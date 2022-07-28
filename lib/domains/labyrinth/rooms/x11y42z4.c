inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 4 }));
  set_short( "Corridor - x11y42z4" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y42z4.c",
  "south" : DIR+"/rooms/x11y41z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
