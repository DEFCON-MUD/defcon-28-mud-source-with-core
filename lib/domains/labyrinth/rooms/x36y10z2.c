inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 10, 2 }));
  set_short( "Passage - x36y10z2" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y10z2.c",
  "east" : DIR+"/rooms/x37y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
