inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 6 }));
  set_short( "Corridor - x5y46z6" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y46z6.c",
  "south" : DIR+"/rooms/x5y45z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
