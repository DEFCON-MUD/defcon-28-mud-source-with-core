inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 56, 4 }));
  set_short( "Hallway - x36y56z4" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y56z4.c",
  "east" : DIR+"/rooms/x37y56z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
