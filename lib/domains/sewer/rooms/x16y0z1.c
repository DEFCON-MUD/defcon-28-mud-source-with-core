inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 1 }));
  set_short( "Passage - x16y0z1" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z1.c",
  "east" : DIR+"/rooms/x17y0z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
