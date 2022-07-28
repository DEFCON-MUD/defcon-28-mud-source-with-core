inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 9 }));
  set_short( "Corridor - x3y20z9" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y20z9.c",
  "east" : DIR+"/rooms/x4y20z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
