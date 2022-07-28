inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 5 }));
  set_short( "Passage - x47y36z5" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y36z5.c",
  "south" : DIR+"/rooms/x47y35z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
