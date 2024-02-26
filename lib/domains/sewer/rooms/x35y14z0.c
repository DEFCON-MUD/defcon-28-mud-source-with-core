inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 0 }));
  set_short( "Passage - x35y14z0" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y14z0.c",
  "east" : DIR+"/rooms/x36y14z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
