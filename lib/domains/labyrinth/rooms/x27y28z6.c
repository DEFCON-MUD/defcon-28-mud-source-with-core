inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 6 }));
  set_short( "Corridor - x27y28z6" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y28z6.c",
  "east" : DIR+"/rooms/x28y28z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
