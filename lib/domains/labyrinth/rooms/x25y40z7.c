inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 7 }));
  set_short( "Hallway - x25y40z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y40z7.c",
  "north" : DIR+"/rooms/x25y41z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
