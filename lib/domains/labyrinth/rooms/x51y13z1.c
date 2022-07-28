inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 13, 1 }));
  set_short( "Corridor - x51y13z1" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y14z1.c",
  "south" : DIR+"/rooms/x51y12z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
