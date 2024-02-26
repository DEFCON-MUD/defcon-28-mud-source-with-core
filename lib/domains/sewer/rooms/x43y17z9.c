inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 17, 9 }));
  set_short( "Corridor - x43y17z9" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y18z9.c",
  "south" : DIR+"/rooms/x43y16z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
