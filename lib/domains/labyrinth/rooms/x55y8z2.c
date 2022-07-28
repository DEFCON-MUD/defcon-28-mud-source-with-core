inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 8, 2 }));
  set_short( "Passage - x55y8z2" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y9z2.c",
  "south" : DIR+"/rooms/x55y7z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
