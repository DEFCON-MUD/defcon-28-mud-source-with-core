inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 43, 7 }));
  set_short( "Hallway - x29y43z7" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y44z7.c",
  "south" : DIR+"/rooms/x29y42z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
