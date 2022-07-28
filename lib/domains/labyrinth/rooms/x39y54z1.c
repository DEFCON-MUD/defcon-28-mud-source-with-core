inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 1 }));
  set_short( "Corridor - x39y54z1" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y54z1.c",
  "north" : DIR+"/rooms/x39y55z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
