inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 6, 3 }));
  set_short( "Corridor - x61y6z3" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y7z3.c",
  "south" : DIR+"/rooms/x61y5z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
