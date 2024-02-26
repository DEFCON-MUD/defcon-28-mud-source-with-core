inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 42, 9 }));
  set_short( "Corridor - x10y42z9" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y42z9.c",
  "east" : DIR+"/rooms/x11y42z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
