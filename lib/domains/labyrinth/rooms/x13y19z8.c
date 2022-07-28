inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 19, 8 }));
  set_short( "Hallway - x13y19z8" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y20z8.c",
  "south" : DIR+"/rooms/x13y18z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
