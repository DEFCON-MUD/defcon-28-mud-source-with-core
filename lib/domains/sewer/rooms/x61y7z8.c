inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 7, 8 }));
  set_short( "Hallway - x61y7z8" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y8z8.c",
  "south" : DIR+"/rooms/x61y6z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
