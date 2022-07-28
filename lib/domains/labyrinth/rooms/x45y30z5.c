inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 5 }));
  set_short( "Corridor - x45y30z5" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "south" : DIR+"/rooms/x45y29z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
