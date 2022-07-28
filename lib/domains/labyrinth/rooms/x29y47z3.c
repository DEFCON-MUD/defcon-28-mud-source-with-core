inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 47, 3 }));
  set_short( "Passage - x29y47z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y48z3.c",
  "south" : DIR+"/rooms/x29y46z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
