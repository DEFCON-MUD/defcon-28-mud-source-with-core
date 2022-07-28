inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 33, 5 }));
  set_short( "Hallway - x21y33z5" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y34z5.c",
  "south" : DIR+"/rooms/x21y32z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
