inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 14, 1 }));
  set_short( "Hallway - x22y14z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y14z1.c",
  "east" : DIR+"/rooms/x23y14z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
