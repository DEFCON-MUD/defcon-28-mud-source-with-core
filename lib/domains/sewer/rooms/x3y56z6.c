inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 6 }));
  set_short( "Corridor - x3y56z6" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y56z6.c",
  "east" : DIR+"/rooms/x4y56z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
