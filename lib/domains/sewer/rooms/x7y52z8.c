inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 8 }));
  set_short( "Corridor - x7y52z8" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y52z8.c",
  "south" : DIR+"/rooms/x7y51z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
