inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 57, 5 }));
  set_short( "Corridor - x49y57z5" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y58z5.c",
  "south" : DIR+"/rooms/x49y56z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
