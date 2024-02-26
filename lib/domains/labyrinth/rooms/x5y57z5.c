inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 57, 5 }));
  set_short( "Corridor - x5y57z5" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y58z5.c",
  "south" : DIR+"/rooms/x5y56z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
