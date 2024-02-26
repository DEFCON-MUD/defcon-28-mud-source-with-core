inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 62, 8 }));
  set_short( "Hallway - x17y62z8" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y62z8.c",
  "east" : DIR+"/rooms/x18y62z8.c",
  "south" : DIR+"/rooms/x17y61z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
