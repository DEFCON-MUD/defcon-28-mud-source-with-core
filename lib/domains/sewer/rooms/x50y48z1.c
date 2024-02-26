inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 48, 1 }));
  set_short( "Passage - x50y48z1" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y48z1.c",
  "east" : DIR+"/rooms/x51y48z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
