inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 2, 0 }));
  set_short( "Hallway - x15y2z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y2z0.c",
  "north" : DIR+"/rooms/x15y3z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
