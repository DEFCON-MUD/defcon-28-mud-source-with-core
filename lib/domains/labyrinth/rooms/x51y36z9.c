inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 9 }));
  set_short( "Corridor - x51y36z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y36z9.c",
  "north" : DIR+"/rooms/x51y37z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
