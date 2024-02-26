inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 12, 5 }));
  set_short( "Corridor - x56y12z5" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y12z5.c",
  "east" : DIR+"/rooms/x57y12z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
