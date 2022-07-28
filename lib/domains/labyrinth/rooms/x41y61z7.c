inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 61, 7 }));
  set_short( "Hallway - x41y61z7" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y62z7.c",
  "south" : DIR+"/rooms/x41y60z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
