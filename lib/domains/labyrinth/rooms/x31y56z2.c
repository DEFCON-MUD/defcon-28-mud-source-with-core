inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 2 }));
  set_short( "Corridor - x31y56z2" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y56z2.c",
  "north" : DIR+"/rooms/x31y57z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
