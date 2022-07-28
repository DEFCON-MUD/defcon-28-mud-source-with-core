inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 32, 4 }));
  set_short( "Passage - x36y32z4" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y32z4.c",
  "east" : DIR+"/rooms/x37y32z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
