inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 8, 8 }));
  set_short( "Hallway - x14y8z8" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y8z8.c",
  "east" : DIR+"/rooms/x15y8z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
