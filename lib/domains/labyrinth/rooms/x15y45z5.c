inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 45, 5 }));
  set_short( "Passage - x15y45z5" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y46z5.c",
  "south" : DIR+"/rooms/x15y44z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
