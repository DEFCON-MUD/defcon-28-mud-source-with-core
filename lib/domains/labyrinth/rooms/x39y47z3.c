inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 47, 3 }));
  set_short( "Hallway - x39y47z3" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y48z3.c",
  "south" : DIR+"/rooms/x39y46z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
