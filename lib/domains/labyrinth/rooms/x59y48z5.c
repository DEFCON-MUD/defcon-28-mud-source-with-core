inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 5 }));
  set_short( "Hallway - x59y48z5" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y48z5.c",
  "north" : DIR+"/rooms/x59y49z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
