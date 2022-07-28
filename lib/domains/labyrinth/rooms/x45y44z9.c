inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 9 }));
  set_short( "Passage - x45y44z9" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y44z9.c",
  "north" : DIR+"/rooms/x45y45z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
