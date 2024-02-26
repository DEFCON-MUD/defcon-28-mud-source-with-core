inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 34, 6 }));
  set_short( "Corridor - x50y34z6" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y34z6.c",
  "east" : DIR+"/rooms/x51y34z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
