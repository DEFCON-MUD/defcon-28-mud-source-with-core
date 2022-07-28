inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 8 }));
  set_short( "Corridor - x41y44z8" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y44z8.c",
  "north" : DIR+"/rooms/x41y45z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
