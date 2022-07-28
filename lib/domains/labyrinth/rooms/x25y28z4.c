inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 4 }));
  set_short( "Passage - x25y28z4" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y28z4.c",
  "north" : DIR+"/rooms/x25y29z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
