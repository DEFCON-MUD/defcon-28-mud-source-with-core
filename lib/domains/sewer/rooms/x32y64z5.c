inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 64, 5 }));
  set_short( "Corridor - x32y64z5" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y64z5.c",
  "east" : DIR+"/rooms/x33y64z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
