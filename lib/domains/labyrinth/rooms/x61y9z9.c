inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 9, 9 }));
  set_short( "Hallway - x61y9z9" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y10z9.c",
  "south" : DIR+"/rooms/x61y8z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
