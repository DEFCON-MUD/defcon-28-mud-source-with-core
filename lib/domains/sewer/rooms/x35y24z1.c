inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 24, 1 }));
  set_short( "Corridor - x35y24z1" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y24z1.c",
  "north" : DIR+"/rooms/x35y25z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
