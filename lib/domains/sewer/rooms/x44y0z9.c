inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 9 }));
  set_short( "Corridor - x44y0z9" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z9.c",
  "east" : DIR+"/rooms/x45y0z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
