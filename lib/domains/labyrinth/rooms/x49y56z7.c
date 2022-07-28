inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 56, 7 }));
  set_short( "Passage - x49y56z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y56z7.c",
  "north" : DIR+"/rooms/x49y57z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
