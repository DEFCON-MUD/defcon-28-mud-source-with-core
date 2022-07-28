inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 43, 4 }));
  set_short( "Hallway - x43y43z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y44z4.c",
  "south" : DIR+"/rooms/x43y42z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
