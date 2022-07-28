inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 12, 7 }));
  set_short( "Corridor - x61y12z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y13z7.c",
  "south" : DIR+"/rooms/x61y11z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
