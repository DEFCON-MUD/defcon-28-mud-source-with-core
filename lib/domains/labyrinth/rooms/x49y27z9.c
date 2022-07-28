inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 27, 9 }));
  set_short( "Corridor - x49y27z9" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y28z9.c",
  "south" : DIR+"/rooms/x49y26z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
