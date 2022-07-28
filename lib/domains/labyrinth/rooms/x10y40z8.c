inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 40, 8 }));
  set_short( "Hallway - x10y40z8" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y40z8.c",
  "east" : DIR+"/rooms/x11y40z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
