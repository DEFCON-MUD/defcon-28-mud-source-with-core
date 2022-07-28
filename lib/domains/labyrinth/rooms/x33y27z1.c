inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 27, 1 }));
  set_short( "Corridor - x33y27z1" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y28z1.c",
  "south" : DIR+"/rooms/x33y26z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
