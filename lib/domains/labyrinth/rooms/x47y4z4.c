inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 4 }));
  set_short( "Passage - x47y4z4" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y4z4.c",
  "south" : DIR+"/rooms/x47y3z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
