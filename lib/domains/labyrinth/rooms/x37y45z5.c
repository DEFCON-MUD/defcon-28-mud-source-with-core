inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 45, 5 }));
  set_short( "Corridor - x37y45z5" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y46z5.c",
  "south" : DIR+"/rooms/x37y44z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
