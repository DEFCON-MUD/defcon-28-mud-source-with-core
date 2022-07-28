inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 23, 7 }));
  set_short( "Hallway - x21y23z7" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y24z7.c",
  "south" : DIR+"/rooms/x21y22z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
