inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 5 }));
  set_short( "Passage - x44y0z5" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z5.c",
  "east" : DIR+"/rooms/x45y0z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
