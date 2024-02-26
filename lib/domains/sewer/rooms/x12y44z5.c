inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 44, 5 }));
  set_short( "Corridor - x12y44z5" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y44z5.c",
  "east" : DIR+"/rooms/x13y44z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
