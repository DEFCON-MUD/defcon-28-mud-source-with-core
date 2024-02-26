inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 30, 9 }));
  set_short( "Corridor - x53y30z9" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y30z9.c",
  "north" : DIR+"/rooms/x53y31z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
