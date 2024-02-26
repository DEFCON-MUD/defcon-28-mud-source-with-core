inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 4 }));
  set_short( "Corridor - x13y28z4" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y28z4.c",
  "south" : DIR+"/rooms/x13y27z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
