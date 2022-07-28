inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 4 }));
  set_short( "Passage - x5y42z4" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z4.c",
  "north" : DIR+"/rooms/x5y43z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
