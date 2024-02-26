inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 5 }));
  set_short( "Corridor - x21y18z5" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y18z5.c",
  "north" : DIR+"/rooms/x21y19z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
