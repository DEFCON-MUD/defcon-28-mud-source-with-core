inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 13, 1 }));
  set_short( "Passage - x45y13z1" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y14z1.c",
  "south" : DIR+"/rooms/x45y12z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
