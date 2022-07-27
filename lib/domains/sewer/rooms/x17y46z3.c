inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 46, 3 }));
  set_short( "Corridor - x17y46z3" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y46z3.c",
  "north" : DIR+"/rooms/x17y47z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
