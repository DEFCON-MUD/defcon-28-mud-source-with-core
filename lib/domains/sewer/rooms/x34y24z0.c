inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 24, 0 }));
  set_short( "Passage - x34y24z0" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y24z0.c",
  "east" : DIR+"/rooms/x35y24z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
