inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 61, 8 }));
  set_short( "Hallway - x35y61z8" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y62z8.c",
  "south" : DIR+"/rooms/x35y60z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
