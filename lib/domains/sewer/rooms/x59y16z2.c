inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 2 }));
  set_short( "Hallway - x59y16z2" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y16z2.c",
  "north" : DIR+"/rooms/x59y17z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
