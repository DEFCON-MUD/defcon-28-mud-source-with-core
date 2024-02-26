inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 47, 8 }));
  set_short( "Hallway - x15y47z8" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y48z8.c",
  "south" : DIR+"/rooms/x15y46z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
