inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 44, 1 }));
  set_short( "Passage - x19y44z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y44z1.c",
  "north" : DIR+"/rooms/x19y45z1.c",
  "south" : DIR+"/rooms/x19y43z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
