inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 0 }));
  set_short( "Passage - x43y8z0" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y9z0.c",
  "south" : DIR+"/rooms/x43y7z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
