inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 32, 5 }));
  set_short( "Passage - x44y32z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y32z5.c",
  "east" : DIR+"/rooms/x45y32z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
