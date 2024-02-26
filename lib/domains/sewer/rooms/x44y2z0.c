inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 2, 0 }));
  set_short( "Passage - x44y2z0" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y2z0.c",
  "east" : DIR+"/rooms/x45y2z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
