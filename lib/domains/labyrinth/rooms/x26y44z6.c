inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 44, 6 }));
  set_short( "Passage - x26y44z6" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y44z6.c",
  "east" : DIR+"/rooms/x27y44z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
