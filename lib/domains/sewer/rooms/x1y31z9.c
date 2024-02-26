inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 31, 9 }));
  set_short( "Corridor - x1y31z9" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y32z9.c",
  "south" : DIR+"/rooms/x1y30z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
