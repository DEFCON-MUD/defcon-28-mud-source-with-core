inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 9 }));
  set_short( "Hallway - x23y48z9" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y48z9.c",
  "south" : DIR+"/rooms/x23y47z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
