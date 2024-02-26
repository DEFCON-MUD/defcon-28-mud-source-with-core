inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 0, 9 }));
  set_short( "Passage - x14y0z9" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y0z9.c",
  "east" : DIR+"/rooms/x15y0z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
