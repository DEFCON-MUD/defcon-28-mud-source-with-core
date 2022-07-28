inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 9 }));
  set_short( "Corridor - x53y16z9" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y17z9.c",
  "south" : DIR+"/rooms/x53y15z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
