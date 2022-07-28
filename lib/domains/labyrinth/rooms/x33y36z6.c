inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 6 }));
  set_short( "Passage - x33y36z6" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y36z6.c",
  "east" : DIR+"/rooms/x34y36z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
