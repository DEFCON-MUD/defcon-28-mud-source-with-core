inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 58, 8 }));
  set_short( "Hallway - x6y58z8" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y58z8.c",
  "east" : DIR+"/rooms/x7y58z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
