inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 64, 5 }));
  set_short( "Hallway - x59y64z5" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y64z5.c",
  "east" : DIR+"/rooms/x60y64z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
