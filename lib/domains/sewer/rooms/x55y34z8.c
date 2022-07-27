inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 8 }));
  set_short( "Hallway - x55y34z8" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y34z8.c",
  "east" : DIR+"/rooms/x56y34z8.c",
  "north" : DIR+"/rooms/x55y35z8.c",
  "south" : DIR+"/rooms/x55y33z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
