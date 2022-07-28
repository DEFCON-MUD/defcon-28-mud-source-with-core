inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 25, 9 }));
  set_short( "Corridor - x29y25z9" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y26z9.c",
  "south" : DIR+"/rooms/x29y24z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
