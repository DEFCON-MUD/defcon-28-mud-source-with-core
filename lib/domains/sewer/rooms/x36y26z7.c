inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 26, 7 }));
  set_short( "Corridor - x36y26z7" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y26z7.c",
  "east" : DIR+"/rooms/x37y26z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
