inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 50, 0 }));
  set_short( "Passage - x7y50z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y50z0.c",
  "east" : DIR+"/rooms/x8y50z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
