inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 4 }));
  set_short( "Hallway - x41y8z4" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z4.c",
  "east" : DIR+"/rooms/x42y8z4.c",
  "south" : DIR+"/rooms/x41y7z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
