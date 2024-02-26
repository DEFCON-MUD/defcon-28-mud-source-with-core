inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 64, 8 }));
  set_short( "Hallway - x13y64z8" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y64z8.c",
  "east" : DIR+"/rooms/x14y64z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
