inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 0 }));
  set_short( "Corridor - x27y42z0" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y42z0.c",
  "south" : DIR+"/rooms/x27y41z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
