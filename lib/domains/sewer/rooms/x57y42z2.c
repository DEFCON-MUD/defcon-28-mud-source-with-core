inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 2 }));
  set_short( "Hallway - x57y42z2" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y42z2.c",
  "south" : DIR+"/rooms/x57y41z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
