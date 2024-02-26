inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 62, 6 }));
  set_short( "Hallway - x14y62z6" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y62z6.c",
  "east" : DIR+"/rooms/x15y62z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
