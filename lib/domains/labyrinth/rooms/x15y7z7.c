inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 7 }));
  set_short( "Hallway - x15y7z7" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z7.c",
  "south" : DIR+"/rooms/x15y6z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
