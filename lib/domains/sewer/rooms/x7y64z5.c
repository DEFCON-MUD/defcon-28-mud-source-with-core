inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 64, 5 }));
  set_short( "Hallway - x7y64z5" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y64z5.c",
  "east" : DIR+"/rooms/x8y64z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
