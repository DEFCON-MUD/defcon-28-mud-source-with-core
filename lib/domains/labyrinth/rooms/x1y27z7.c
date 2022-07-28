inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 27, 7 }));
  set_short( "Passage - x1y27z7" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y28z7.c",
  "south" : DIR+"/rooms/x1y26z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
