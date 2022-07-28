inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 8 }));
  set_short( "Hallway - x1y0z8" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
