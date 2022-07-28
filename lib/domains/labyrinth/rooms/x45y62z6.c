inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 62, 6 }));
  set_short( "Hallway - x45y62z6" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y62z6.c",
  "south" : DIR+"/rooms/x45y61z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
