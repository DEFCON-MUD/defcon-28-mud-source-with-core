inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 2 }));
  set_short( "Hallway - x23y16z2" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y16z2.c",
  "north" : DIR+"/rooms/x23y17z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
