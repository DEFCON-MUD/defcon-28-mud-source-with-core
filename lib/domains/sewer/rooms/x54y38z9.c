inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 38, 9 }));
  set_short( "Passage - x54y38z9" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y38z9.c",
  "east" : DIR+"/rooms/x55y38z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
