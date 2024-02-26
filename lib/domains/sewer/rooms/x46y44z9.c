inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 44, 9 }));
  set_short( "Corridor - x46y44z9" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y44z9.c",
  "east" : DIR+"/rooms/x47y44z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
