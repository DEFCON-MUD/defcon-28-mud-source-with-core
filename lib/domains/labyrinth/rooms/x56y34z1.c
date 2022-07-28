inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 34, 1 }));
  set_short( "Hallway - x56y34z1" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y34z1.c",
  "east" : DIR+"/rooms/x57y34z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
