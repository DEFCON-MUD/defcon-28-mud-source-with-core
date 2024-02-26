inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 6, 1 }));
  set_short( "Corridor - x13y6z1" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y6z1.c",
  "south" : DIR+"/rooms/x13y5z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
