inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 30, 6 }));
  set_short( "Corridor - x8y30z6" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y30z6.c",
  "east" : DIR+"/rooms/x9y30z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
