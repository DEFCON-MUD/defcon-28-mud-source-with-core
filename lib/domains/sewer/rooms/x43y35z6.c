inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 35, 6 }));
  set_short( "Hallway - x43y35z6" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y36z6.c",
  "south" : DIR+"/rooms/x43y34z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
