inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 12, 9 }));
  set_short( "Corridor - x6y12z9" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y12z9.c",
  "east" : DIR+"/rooms/x7y12z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
