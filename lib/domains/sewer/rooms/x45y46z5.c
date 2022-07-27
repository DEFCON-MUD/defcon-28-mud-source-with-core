inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 5 }));
  set_short( "Corridor - x45y46z5" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y47z5.c",
  "south" : DIR+"/rooms/x45y45z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
