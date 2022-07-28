inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 60, 5 }));
  set_short( "Passage - x37y60z5" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y60z5.c",
  "south" : DIR+"/rooms/x37y59z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
