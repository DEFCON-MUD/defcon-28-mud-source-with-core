inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 45, 8 }));
  set_short( "Passage - x21y45z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y46z8.c",
  "south" : DIR+"/rooms/x21y44z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
