inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 2, 6 }));
  set_short( "Corridor - x28y2z6" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y2z6.c",
  "east" : DIR+"/rooms/x29y2z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
