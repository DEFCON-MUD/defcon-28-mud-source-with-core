inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 61, 4 }));
  set_short( "Hallway - x29y61z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y62z4.c",
  "south" : DIR+"/rooms/x29y60z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
