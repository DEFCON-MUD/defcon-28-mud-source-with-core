inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 8 }));
  set_short( "Passage - x15y20z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z8.c",
  "south" : DIR+"/rooms/x15y19z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
