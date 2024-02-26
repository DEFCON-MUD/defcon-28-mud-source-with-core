inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 3 }));
  set_short( "Passage - x11y17z3" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z3.c",
  "south" : DIR+"/rooms/x11y16z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
