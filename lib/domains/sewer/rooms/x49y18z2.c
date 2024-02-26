inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 2 }));
  set_short( "Hallway - x49y18z2" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y18z2.c",
  "south" : DIR+"/rooms/x49y17z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
