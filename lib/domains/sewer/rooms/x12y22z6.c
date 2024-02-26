inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 22, 6 }));
  set_short( "Hallway - x12y22z6" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y22z6.c",
  "east" : DIR+"/rooms/x13y22z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
